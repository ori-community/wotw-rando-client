#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#include <Modloader/app/structs/ServerConfiguration.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ServerConfiguration {
    IL2CPP_REGISTER_METHOD(0x00ABE2D0, app::ServerConfigurationProperties, get_Configuration, (app::ServerConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ABE2E0, void, ctor, (app::ServerConfiguration * this_ptr, app::GameObject* gameobj, app::ServerConfigurationProperties configuration))
} // namespace app::classes::ServerConfiguration
