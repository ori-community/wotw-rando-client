#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Syst_UInt_framewor_Swit_SwitchControll_VibrationDataEnt___Arr__Cl.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_UInt_framewor_Swit_SwitchControll_VibrationDataEnt___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.UInt32,frameworks.Switch.SwitchController+VibrationDataEntry][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry___Array
} // namespace app::classes::types
