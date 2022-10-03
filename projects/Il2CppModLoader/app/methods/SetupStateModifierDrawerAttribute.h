#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SetupStateModifierDrawerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ModifierType, (app::SetupStateModifierDrawerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::SetupStateModifierDrawerAttribute * this_ptr, app::Type* modifier_type))
} // namespace app::classes::SetupStateModifierDrawerAttribute
