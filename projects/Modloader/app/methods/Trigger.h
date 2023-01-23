#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Trigger_1.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Trigger {
    IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_IsSuspended, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11430, void, set_IsSuspended, (app::Trigger_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0070DEC0, app::SuspendableMask__Enum, get_Mask, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11440, void, set_Mask, (app::Trigger_1 * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FC380, int32_t, get_AmountOfTimesActivated, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_AmountOfTimesActivated, (app::Trigger_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsTriggered, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsTriggered, (app::Trigger_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, ShouldCreateCheckpoint, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11510, void, Reset, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11580, void, OnEnable, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11760, void, OnDisable, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerEnable, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerDisable, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11940, void, OnRestoreCheckpoint, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11950, void, Update, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B119E0, void, DoTrigger, (app::Trigger_1 * this_ptr, bool should_check_condition))
    IL2CPP_REGISTER_METHOD(0x00B11D00, void, StopTrigger, (app::Trigger_1 * this_ptr, bool stop_timeline, bool reset_trigger_state))
    IL2CPP_REGISTER_METHOD(0x00B11E00, void, OnTriggerActivated, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11EB0, app::IEnumerator*, ProcessTrigger, (app::Trigger_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, Validate, (app::Trigger_1 * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B12000, void, ctor, (app::Trigger_1 * this_ptr))
} // namespace app::classes::Trigger
