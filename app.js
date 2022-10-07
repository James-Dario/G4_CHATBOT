const express = require('express')
const app = express()
const port = 8383

var userchat = "";

app.use(express.static('public'))
app.use(express.json())


app.get('/info', (req,res)=>{
    const answer = lib.loans(userchat,1);
    res.status(200).json({info: answer})
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
    "loans": [
        "string", ["string","int"]
    ]
});



