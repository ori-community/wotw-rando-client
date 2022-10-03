#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SceneTeleportDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, ctor_1, (app::SceneTeleportDebugMenuItem * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00BC04F0, void, ctor_2, (app::SceneTeleportDebugMenuItem * this_ptr, app::String* path, app::String* name, app::Func_1_Boolean_* func))
    IL2CPP_REGISTER_METHOD(0x00BC0500, void, ctor_3, (app::SceneTeleportDebugMenuItem * this_ptr, app::String* path, app::String* name, app::String* help_text, app::Func_1_Boolean_* func))
    IL2CPP_REGISTER_METHOD(0x00BC0510, void, ctor_4, (app::SceneTeleportDebugMenuItem * this_ptr, app::String* path, app::String* name, app::String* help_text, app::Func_1_Boolean_* func, app::Func_1_Boolean_* func_alt))
    IL2CPP_REGISTER_METHOD(0x00BC0540, void, OnSelectedFixedUpdate, (app::SceneTeleportDebugMenuItem * this_ptr))
} // namespace app::classes::SceneTeleportDebugMenuItem
