#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_CleverMenuIte_EquipmentRadialSelecti_RadialItemVisu___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entr_CleverMenuIte_EquipmentRadialSelectio_RadialItemVisua___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[CleverMenuItem,EquipmentRadialSelection+RadialItemVisual][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Array
} // namespace app::classes::types
