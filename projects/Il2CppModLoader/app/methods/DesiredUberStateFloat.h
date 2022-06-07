#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DesiredUberStateFloat {
    IL2CPP_REGISTER_METHOD(0x01B59780, void, WriteDesiredStates, (app::DesiredUberStateFloat * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727980, DesiredUberStateFloat_WriteDesiredStates__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B598B0, void, Revert, (app::DesiredUberStateFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUberState *, get_UberState, (app::DesiredUberStateFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B59900, bool, IsFulfilled, (app::DesiredUberStateFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B599E0, app::String *, get_NiceName, (app::DesiredUberStateFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DesiredUberStateFloat * this_ptr))
}
