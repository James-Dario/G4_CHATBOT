const express = require('express')
const app = express()
const port = process.env.PORT || 8383

var userchat = "";
var stagecount = 0;
var temp = "";
var background = "none"
var tempback = "none";
//app.use(express.static('public'))
app.use(express.json())


app.get('/info', (req,res)=>{
    if(userchat != "exit"){ 
        if(userchat === "B" || userchat==="b"){
            stagecount = 2;
            console.log("background"+background+"stage"+stagecount);
            const answer = lib.mainfunc(tempback,2);
            background = "none";
            res.status(200).json({info: answer})
        }else if(userchat === "Y" || userchat==="y"){
            stagecount = stagecount - 1;
            console.log("temp"+temp+"stage"+stagecount);
            const answer = lib.mainfunc(temp,stagecount);
            res.status(200).json({info: answer})
        }else if(userchat === "N"|| userchat === "n"){
            res.status(200).json({info: "<b>I hope you learned something😊💗 Thank you and have a nice day!</b>"})
        }
        else if(userchat != "reset"){
            if(stagecount == 1){
                background = userchat;
                tempback = userchat;
                console.log("saving back" + tempback)
            }
            if(stagecount == 2){
                console.log('check background'+tempback)
                background = tempback;
                temp = userchat;
                console.log("saving" + temp)
            }
            stagecount = stagecount + 1;
            console.log("temp"+temp+"stage"+stagecount);
            console.log("question")
            //console.log(stagecount);
            //console.log("stage" + stagecount)
            const answer = lib.mainfunc(userchat,stagecount);
            res.status(200).json({info: answer})
        }

    }
    
})


app.post('/', (req,res) =>{
    const {parcel} = req.body
    userchat=parcel
    //console.log(parcel)
    if(userchat == "reset"){
        
        const answer = lib.resetfunc("reset");
        console.log("reset");
        stagecount = 0;
        return res.status(200).send({status:'reset'})
    }
    if (!parcel){
        return res.status(400).send({status:"failed"})
    }
    res.status(200).send({status:'received'})
})


app.listen(port,() => console.log(`server has started on port: ${8383}`))






const ffi = require("ffi-napi");
const lib = new ffi.Library("./cpp/dll/main", {
    "mainfunc":[
        "string", ["string","int"]
    ],
    "resetfunc":[
        "string", ["string"]
    ]
});



