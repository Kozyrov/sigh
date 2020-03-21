open Express;

let app = express();

let port = 8008; 

let onListen = (event) => {
    switch (event) {
        | exception (Js.Exn.Error(event)) =>
        Js.log(event);
        Node.Process.exit(1);
        | _ => Js.log({j|Listening on http//localhost: $port|j})
    };
};

let server = App.listen(app, ~port=port, ~onListen, ());