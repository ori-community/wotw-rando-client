#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ActionHelper {
    IL2CPP_REGISTER_METHOD(0x004C4E30, app::String *, GetName_1, (app::ActionMethod * action))
    IL2CPP_REGISTER_METHOD(0x004C4F00, app::String *, GetName_2, (app::Condition_1 * condition))
    IL2CPP_REGISTER_METHOD(0x004C4FD0, app::String *, GetName_3, (app::Object_1 * target))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String *, GetName_4, (app::String * s))
}
