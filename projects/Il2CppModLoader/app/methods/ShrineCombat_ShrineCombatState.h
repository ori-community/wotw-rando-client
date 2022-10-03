#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ShrineCombat_ShrineCombatState {
    IL2CPP_REGISTER_METHOD(0x0073CAB0, void, ctor, (app::ShrineCombat_ShrineCombatState * this_ptr, app::ShrineCombat* shrine_combat))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::ShrineCombat_ShrineCombatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DA30, void, OnEnter, (app::ShrineCombat_ShrineCombatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DA40, void, UpdateState, (app::ShrineCombat_ShrineCombatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::ShrineCombat_ShrineCombatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSuspended, (app::ShrineCombat_ShrineCombatState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnsuspended, (app::ShrineCombat_ShrineCombatState * this_ptr))
} // namespace app::classes::ShrineCombat_ShrineCombatState
