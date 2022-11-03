#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyTimedTrigger {
    IL2CPP_REGISTER_METHOD(0x00A3C560, void, Awake, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C600, void, OnDestroy, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C6A0, void, Start, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C6B0, void, FixedUpdate, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, TriggerNow, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C8E0, void, Reset, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C8F0, void, Serialize, (app::LegacyTimedTrigger * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::LegacyTimedTrigger * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::LegacyTimedTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C920, void, set_Mask, (app::LegacyTimedTrigger * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A3C9D0, void, ctor, (app::LegacyTimedTrigger * this_ptr))
} // namespace app::classes::LegacyTimedTrigger
