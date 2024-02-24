const { faker, tr } = require('@faker-js/faker');
const mysql = require('mysql2');
const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'BACKEND_APP',
    password: 'My&mern@9596'
  });

// let table="show databases"
// INSRT DATA  IN DATABSES
// let q="INSERT INTO user(id, usename, email, password) VALUES(?,?,?,?)";
// let r=['8921', 'sukhnandan', 'ashutos@gmail.com', '22345']

//multiple data 
let mul='INSERT INTO USER(ID, USENAME, EMAIL, PASSWORD) VALUES ?'
let dt = [
      ['8931', 'ashutosh', 'sukhan@gmail.com', '1345'],
      ['8941', 'sukumar', 'motus@gmail.com', '2345']
]; 
  try{
    connection.query(mul,[dt], (err, results)=>{
        if(err) throw err;
        console.log(results);
        // console.log(results[0]);
        // console.log(results[1]);
        // console.log(results[3]);
        // console.log(results.length);
      })
  }catch (err){
    console.log("Hi");
  }
   
connection.end();
let getRandomUser = ()=> {
    return {
      userId: faker.string.uuid(),
      username: faker.internet.userName(),
      email: faker.internet.email(),
      password: faker.internet.password()
    };
  }
 
 