#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivateCooldownRule.h>
#include <Modloader/app/structs/IComboMove.h>

namespace app::classes::ActivateCooldownRule {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_CurrentCooldown, app::ActivateCooldownRule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_CurrentCooldown, app::ActivateCooldownRule* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IComboMove*, get_CooldownSourceMove, app::ActivateCooldownRule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_CooldownSourceMove, app::ActivateCooldownRule* this_ptr, app::IComboMove* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ActivateCooldownRule* this_ptr)
} // namespace app::classes::ActivateCooldownRule
