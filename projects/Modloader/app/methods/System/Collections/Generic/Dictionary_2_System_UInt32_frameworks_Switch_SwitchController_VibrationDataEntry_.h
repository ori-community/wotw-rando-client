#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_.h>
#include <Modloader/app/structs/SwitchController_VibrationDataEntry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_* this_ptr,
        uint32_t key,
        app::SwitchController_VibrationDataEntry* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02F028F0,
        app::SwitchController_VibrationDataEntry*,
        get_Item,
        app::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_* this_ptr,
        uint32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_* this_ptr,
        uint32_t key,
        app::SwitchController_VibrationDataEntry** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_
