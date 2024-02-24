const mysql=require('mysql2');
const { faker, tr } = require('@faker-js/faker');
const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'BACKEND_APP',
    password: 'My&mern@9596'
  });

  let getRandomUser=()=>{
    return[
      faker.string.uuid(),
      faker.internet.userName(),
      faker.internet.email(),
      faker.internet.password()
    ];
  };
let q = 'INSERT INTO bulk(ID, USENAME, EMAIL, PASSWORD) VALUES ?'
let data = [];
for(let i=0; i<10; i++){
    data.push(getRandomUser());
    // console.log(getRandomUser());
}

try{
    connection.query(q,[data], (err, result)=>{
        if(err) throw err;
        console.log(result);
    })
}catch(err){
    console.log(err);
}
connection.end();
 