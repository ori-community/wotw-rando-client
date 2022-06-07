#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetDemoPlaytimeAction {
    IL2CPP_REGISTER_METHOD(0x005A2900, void, Perform, (app::SetDemoPlaytimeAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04745428, SetDemoPlaytimeAction_Perform__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetDemoPlaytimeAction * this_ptr))
}
