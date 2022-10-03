#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyTrigger {
    IL2CPP_REGISTER_METHOD(0x00CA4070, bool, get_IsSuspended, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112BC00, void, set_IsSuspended, (app::LegacyTrigger * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112BC10, void, set_Mask, (app::LegacyTrigger * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00653FB0, int32_t, get_AmountOfTimesActivated, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881060, void, set_AmountOfTimesActivated, (app::LegacyTrigger * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0112BCC0, void, Awake, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112BEA0, void, OnDestroy, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C080, void, OnEnable, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C0A0, void, OnDisable, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerEnable, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerDisable, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C0C0, void, OnRestoreCheckpoint, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C1A0, void, Update, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C230, void, DoTrigger, (app::LegacyTrigger * this_ptr, bool should_check_condition))
    IL2CPP_REGISTER_METHOD(0x0112C620, void, OnTriggerActivated, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C6C0, app::IEnumerator*, ProcessTrigger, (app::LegacyTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00612390, void, Serialize, (app::LegacyTrigger * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0112C810, void, ctor, (app::LegacyTrigger * this_ptr))
} // namespace app::classes::LegacyTrigger
