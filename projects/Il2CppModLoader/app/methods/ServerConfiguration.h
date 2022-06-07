#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerConfiguration {
    IL2CPP_REGISTER_METHOD(0x00ABE2D0, app::ServerConfigurationProperties, get_Configuration, (app::ServerConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ABE2E0, void, ctor, (app::ServerConfiguration * this_ptr, app::GameObject * gameobj, app::ServerConfigurationProperties configuration))
}
