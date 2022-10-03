#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Scripting::APIUpdating::MovedFromAttribute {
    IL2CPP_REGISTER_METHOD(0x01248670, void, ctor_1, (app::MovedFromAttribute * this_ptr, app::String* source_namespace))
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor_2, (app::MovedFromAttribute * this_ptr, app::String* source_namespace, bool is_in_different_assembly))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Namespace, (app::MovedFromAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsInDifferentAssembly, (app::MovedFromAttribute * this_ptr, bool value))
} // namespace app::classes::UnityEngine::Scripting::APIUpdating::MovedFromAttribute
