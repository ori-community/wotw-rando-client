# Packager

This module keeps configuration of deployment packages build. It can also override default configurations
from the `backend` module. In `src/main/resources` you can find customized `application.conf` which will override
the `application.conf` file from the `backend` module.

## How to create a package?

You can create a universal production package with your application using the following command: 
`sbt packager/universal:packageBin`. 
Your package will be bundled in a ZIP archive in the `packager/target/universal` directory.
Call the `bin/wotw-rando-seedgen` starting script to start the application. Please note that resource access is dependent on the working directory, so you should run it exactly as above, from the directory containing `lib` and `UdashStatics` directories - otherwise the webserver won't find the assets (e.g. `index.html`).

## What's next?

Take a look at the [SBT Native Packager](https://github.com/sbt/sbt-native-packager) 
docs for more details. You can find there a lot of possible configurations for building 
different types of packages, e.g., `.zip`, `.deb`, `.msi` or Docker containers.

