const { MongoClient, ObjectID } = require("mongodb");
const Express = require("express");
const BodyParser = require('body-parser');

const server = Express();
server.use(BodyParser.json());
server.use(BodyParser.urlencoded({ extended: true }));

const client = new MongoClient(process.env["ATLAS_URI"]);

// use an environment variable or configuration file for security reasons to store URI!

var collection;
server.post("/plummies", async (request, response, next) => {});
server.get("/plummies", async (request, response, next) => {});
server.get("/plummies/:id", async (request, response, next) => {});
server.put("/plummies/:plummie_tag", async (request, response, next) => {});
server.listen("3000", async () => {
    try {
        await client.connect();
        collection = client.db("plummeting-people").collection("plummies");
        console.log("Listening at :3000...");
    } catch (e) {
        console.error(e);
    }
});