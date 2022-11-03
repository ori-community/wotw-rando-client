#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BreakPhysicsSystemAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::BreakPhysicsSystemAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4AFE0, void, Perform, (app::BreakPhysicsSystemAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D4B420, void, Serialize, (app::BreakPhysicsSystemAction * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00D4B520, app::String*, GetNiceName, (app::BreakPhysicsSystemAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::GameObject*, GetDynamicGraphicTarget, (app::BreakPhysicsSystemAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087A2D0, void, ctor, (app::BreakPhysicsSystemAction * this_ptr))
} // namespace app::classes::BreakPhysicsSystemAction
