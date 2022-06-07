#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Res {
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String *, GetString_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0199FAC0, app::String *, GetString_2, (app::String * name, app::Object__Array * args))
}
