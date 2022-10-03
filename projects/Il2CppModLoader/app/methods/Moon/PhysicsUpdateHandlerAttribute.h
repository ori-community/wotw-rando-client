#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::PhysicsUpdateHandlerAttribute {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_UseFixedUpdate, (app::PhysicsUpdateHandlerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_UseFixedUpdate, (app::PhysicsUpdateHandlerAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_JobSystemType, (app::PhysicsUpdateHandlerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_JobSystemType, (app::PhysicsUpdateHandlerAttribute * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PhysicsUpdateHandlerAttribute * this_ptr))
} // namespace app::classes::Moon::PhysicsUpdateHandlerAttribute
