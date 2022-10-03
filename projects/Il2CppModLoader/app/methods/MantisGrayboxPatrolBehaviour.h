#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MantisGrayboxPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (app::MantisGrayboxPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::MantisGrayboxPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecute, (app::MantisGrayboxPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::MantisGrayboxPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (app::MantisGrayboxPatrolBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MantisGrayboxPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MantisGrayboxPatrolBehaviour * this_ptr))
} // namespace app::classes::MantisGrayboxPatrolBehaviour
