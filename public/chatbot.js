const chatBody = document.querySelector(".chat-body");
const txtInput = document.querySelector("#txtinput");
const sendB = document.querySelector(".send");
const loadingElement = document.querySelector(".loading");


sendB.addEventListener("click", postInfo);
sendB.addEventListener("click", getInfo);
sendB.addEventListener("click", () => renderUserMessage());


txtInput.addEventListener("keyup", ()=>{
    if(event.keyCode === 13){
        renderUserMessage();
    }
});

var nameuser = "";

const renderUserMessage = () => {
    const userInput = txtInput.value;
    renderMessageElement(userInput, "user");
    txtInput.value = "";
    toggleLoading(false);
    
    setTimeout(()=>{
        renderChatbotResponse(userInput);
        setScrollPos();
        toggleLoading(true);
    }, 1200);
};

const renderChatbotResponse = (userInput) =>{
        //const res = getChatbotResponse(userInput);
        renderMessageElement(greply);
        greply = ""


        console.log(stage)
        if(stage == 4){
            const messageElement = document.createElement("div");
            //const txtNode = document.createTextNode(txt); 
            messageElement.innerHTML = "Do you want to continue?";   
            messageElement.classList.add('chatbot-message');    
            //messageElement.append(txtNode);     
            chatBody.append(messageElement)
        }
};

const renderMessageElement = (txt, type) => {       
    let className = "user-message";
    
    if(type!=='user'){
        className = "chatbot-message";
    }

    if(stage == 1 && type !=='user'){
        const messageElement = document.createElement("div");
        //const txtNode = document.createTextNode(txt); 
        messageElement.innerHTML = "Hi, "+nameuser +"! "+ txt;
        messageElement.classList.add(className);    
        //messageElement.append(txtNode);     
        chatBody.append(messageElement)
    }else{
        const messageElement = document.createElement("div");
        //const txtNode = document.createTextNode(txt); 
        messageElement.innerHTML = txt;   
        messageElement.classList.add(className);    
        //messageElement.append(txtNode);     
        chatBody.append(messageElement)
    }


};

// const getChatbotResponse = (userInput) => {
//     return responseObj[userInput] == undefined
//     ? "Nudaw"
//     : responseObj[userInput];
// };

const setScrollPos = () =>{
    if(chatBody.scrollHeight>0){
        chatBody.scrollTop = chatBody.scrollHeight;
    }
}

const toggleLoading = (show) => loadingElement.classList.toggle("hide", show)



// express

const getBtn = document.getElementById('get')
const postBtn = document.getElementById('post')
const input = document.getElementById('input')
const reply = document.getElementById('reply')

var stage = 0;
var greply = "";

const baseUrl = 'http://localhost:8383/'        


async function getInfo(e){
    if (txtInput.value === "back"|| txtInput.value === "yes"){
        stage = stage - 1;
    }else{
        stage = stage + 1;
        if(stage ==1){
            nameuser = txtInput.value;
        }
    }
    
    e.preventDefault()
    const res = await fetch(baseUrl+'info/',{
        method:'GET'
    })
    console.log(res)
    const data = await res.json()
    greply = data.info

    
}   


async function postInfo(e){
    e.preventDefault()
    
    const res = await fetch(baseUrl,{
        method:'POST',
        headers:{
            "content-Type":'application/json'
        },
        body:JSON.stringify({
            parcel:txtInput.value
        })
    })
}