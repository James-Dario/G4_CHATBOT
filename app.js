const express = require('express')
const app = express()
const port = 8383

var userchat = "";
var stagecount = 0;

app.use(express.static('public'))
app.use(express.json())


app.get('/info', (req,res)=>{
    if(userchat != "exit"){
        if(userchat != "back"){
            stagecount = stagecount + 1;
        }else{
            stagecount = stagecount - 1;
        }
        
        const answer = lib.mainfunc(userchat,stagecount);
        res.status(200).json({info: answer})
    }
    
})


app.post('/', (req,res) =>{
    const {parcel} = req.body
    userchat=parcel
    console.log(parcel)
    if (!parcel){
        return res.status(400).send({status:"failed"})
    }
    res.status(200).send({status:'received'})
})


app.listen(port,() => console.log('server has started on port: ${port}'))






const ffi = require("ffi-napi");
const lib = new ffi.Library("./cpp/dll/main", {
    "mainfunc":[
        "string", ["string","int"]
    ]
});



