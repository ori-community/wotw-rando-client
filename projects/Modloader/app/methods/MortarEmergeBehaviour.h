#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MortarEmergeBehaviour {
    IL2CPP_REGISTER_METHOD(0x01475DC0, void, OnEnter, (app::MortarEmergeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x014760E0, app::BehaviourStatus__Enum, OnExecute, (app::MortarEmergeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F15500, void, OnExit, (app::MortarEmergeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MortarEmergeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01476110, void, _OnEnter_b__3_0, (app::MortarEmergeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785928, MortarEmergeBehaviour__OnEnter_b__3_0__MethodInfo)
} // namespace app::classes::MortarEmergeBehaviour
