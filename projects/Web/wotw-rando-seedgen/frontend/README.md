# Frontend (JS)

This module contains the browser code compiled to JavaScript and served as the client application.

The code is separated into three packages:
* `wotw.orirando.com.frontend.routing` - all the code related to the frontend application routing.
* `wotw.orirando.com.frontend.services` - the business logic of the client application.
* `wotw.orirando.com.frontend.views` - the code describing views and their behaviour.

The root package (`wotw.orirando.com.frontend`) also contains `JSLauncher` and `ApplicationContext`. The former 
initializes the whole application inside a `div` with `id = application`. The latter keeps references 
to the global service instances, yet we use it only in the class resolving `ViewFactories` 
for the current application state in order to avoid using static variables.

Read more about bootstrapping the frontend application in the [Udash Guide](http://guide.udash.io/#/bootstrapping/frontend).

## Services

The services keep the client application business logic separate from the rest of the code. 
`UserContextService` holds an active `UserContext` and provides access to the `SecureRPC` with 
a current `UserToken`. `TranslationsService` keeps entities responsible for translations: 
`TranslationProvider` and `LangProperty` (more about i18n in the [Udash Guide](http://guide.udash.io/#/ext/i18n)). 
The `RPCService` implements the `MainClientRPC` interface and is responsible for handling notifications from the server.
The `NotificationsCenter` allows the other system components to register a callback and receive notification
about a new message or connection.  

Read more about server notifications in [Udash Guide](http://guide.udash.io/#/rpc/server-client).

## States, Routing and ViewFactories

A Udash application is based on states. The application state describes the created `ViewFactories`
structure and is determined by a URL. On each change, the URL is resolved to a `RoutingState`. 
States tend to form a nested hierarchy.  With `ContainerState` and `FinalState` you can express 
the place of a state in the hierarchy.

In the `RoutingRegistryDef` you assign URLs to one of the application states. 
The `StatesToViewFactoryDef` resolves `ViewFactory` based on the provided `State`, it's also a good place
to inject dependencies from the `ApplicationContext` to the view.

Read more about routing in the [Udash Guide](http://guide.udash.io/#/frontend/routing).

## Views

Every single view in Udash application is based on four elements:
* **Model** - based on the [Properties](http://guide.udash.io/#/frontend/properties) mechanism, it provides one and two-way bindings to DOM elements.
* **View** - creates a [Scalatags](https://github.com/lihaoyi/scalatags) template with a method providing a child view to render.
* **Presenter** - it should contain a business logic of the related view. It also handles application state changes.
* **ViewFactory** - responsible for creating the model, view and presenter. 

Read more about views modelling in the [Udash Guide](http://guide.udash.io/#/frontend/mvp).

As you might have noticed, the main model of the view is usually a `ModelProperty`. This kind of property
allows you to represent your data model hierarchically with case classes, regular classes and traits.
In order to use given type `T` as a model hierarchy template, you have to create an implicit `ModelPropertyCreator[T]` instance 
for it. The easiest way is to create companion object of this type extending `HasModelPropertyCreator[T]`.
You can also define an `implicit val` with the result of `ModelPropertyCreator.materialize[T]`.

Read more about properties in the [Udash Guide](http://guide.udash.io/#/frontend/properties).

## What's next?

You've probably read all the READMEs in this application. Take a look around the codebase. 
The code itself is documented, so we hope you understand it without an issue.

You can also take a look at the [Udash Developers Guide](http://guide.udash.io/). If you have any questions,
you can ask for help on our [Gitter channel](https://gitter.im/UdashFramework/udash-core).