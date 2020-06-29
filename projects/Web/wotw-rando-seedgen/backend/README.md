# Backend (JVM)

The code from this module is responsible for handling clients' RPC requests, serving static files 
and rendering CSS files.

You can find five main packages in the sources of this module:
* `wotw.orirando.com.backend.css` - the code rendering the styles defined in the `shared` module.
* `wotw.orirando.com.backend.rpc` - an implementation of the server RPC interfaces.
* `wotw.orirando.com.backend.server` - the code setting up [Jetty](https://www.eclipse.org/jetty/) with required servlets.
* `wotw.orirando.com.backend.services` - services encapsulating the main business logic of the application.

## RPC and Services

The main responsibility of the server application is to handle RPC calls from client applications. 
The implementation is separated into two layers:
* RPC endpoints - created separately for each client connection which are a direct implementation of the RPC interfaces;
* services - created once in the `Launcher` object.

The endpoints are a good place to resolve `UserContext` or verify user's permissions. The services usually 
contain business logic reusable between endpoints and other entry points of the app e.g. REST API.

Read more about the RPC interfaces in the [Udash Guide](http://guide.udash.io/#/rpc).

## Server and configuration

The configuration file (`application.conf`) contains application configuration variables e.g. the user list or the web 
server port. It is stored in `backend/src/main/resources`. This directory also contains translation bundles and basic 
[Logback](https://logback.qos.ch/) configuration. 

As you can see, the `Launcher` object loads configuration from `application.conf` using 
[Typesafe Config](https://lightbend.github.io/config/), creates services and starts `ApplicationServer`. 
The `ApplicationServer` class creates two servlets: the first serves static files like compiled JS or CSS sources, 
the second is responsible for handling WebSocket connections from the client applications. The aforementioned servlets 
are registered in the [Jetty](https://www.eclipse.org/jetty/) server. 

Read more about bootstrapping the backend application in the [Udash Guide](http://guide.udash.io/#/bootstrapping/backend).

## CSS

As mentioned in the `shared` module's README, the style definitions are not compiled into JavaScript code. 
You should render them on the JVM side and serve as a static file - it makes the client's JavaScript source 
much smaller and faster.  

The class `CssRenderer` is started from the `compileCss` SBT task. You don't have to restart the application server
to refresh them, just run `sbt compileCss` (or `compileStatics` which depends on `compileCss`) 
and refresh the page in the browser. 

Read more about Udash CSS in the [Udash Guide](http://guide.udash.io/#/frontend/templates).

## What's next?

You are now familiar with the `backend` module. It's time to take a look at the client application in the 
`frontend` module.