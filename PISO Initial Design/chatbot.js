const chatBody = document.querySelector(".chat-body");
const txtInput = document.querySelector("#txtinput");
const sendB = document.querySelector(".send");
const loadingElement = document.querySelector(".loading");

sendB.addEventListener("click", () => renderUserMessage());

txtInput.addEventListener("keyup", ()=>{
    if(event.keyCode === 13){
        renderUserMessage();
    }
});

//
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
    const res = getChatbotResponse(userInput);
    renderMessageElement(res);
};

const renderMessageElement = (txt, type) => {
    let className = "user-message";
    if(type!=='user'){
        className = "chatbot-message";
    }
    const messageElement = document.createElement("div");
    const txtNode = document.createTextNode(txt);
    messageElement.classList.add(className);
    messageElement.append(txtNode);
    chatBody.append(messageElement);
};

const getChatbotResponse = (userInput) => {
    return responseObj[userInput] == undefined
    ? "Nudaw"
    : responseObj[userInput];
};

const setScrollPos = () =>{
    if(chatBody.scrollHeight>0){
        chatBody.scrollTop = chatBody.scrollHeight;
    }
}

const toggleLoading = (show) => loadingElement.classList.toggle("hide", show)