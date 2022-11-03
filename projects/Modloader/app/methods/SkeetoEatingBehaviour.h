#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkeetoEatingBehaviour {
    IL2CPP_REGISTER_METHOD(0x00754CE0, app::SkeetoLocomotion*, get_Locomotion, (app::SkeetoEatingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754DC0, void, OnEnter, (app::SkeetoEatingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00754F40, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoEatingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007551C0, void, OnExit, (app::SkeetoEatingBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00755290, void, ctor, (app::SkeetoEatingBehaviour * this_ptr))
} // namespace app::classes::SkeetoEatingBehaviour
