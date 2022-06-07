#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::SetBooleanAction {
    IL2CPP_REGISTER_METHOD(0x0300FFA0, app::String *, get_Info, (app::SetBooleanAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030102A0, app::String *, get_ChanceInfoString, (app::SetBooleanAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03010360, bool, OnExecute, (app::SetBooleanAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x03010520, void, ctor, (app::SetBooleanAction * this_ptr))
}
