#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SkeetoKeepPositionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00758140, void, OnEntityInitialized, (app::SkeetoKeepPositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00758270, void, OnEnter, (app::SkeetoKeepPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00758280, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoKeepPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SkeetoKeepPositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00758470, void, ctor, (app::SkeetoKeepPositionBehaviour * this_ptr))
} // namespace app::classes::SkeetoKeepPositionBehaviour
