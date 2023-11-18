#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Ent_Mo_Timeli_MoonTimeli_Mo_BlockDamageInterruptionHandl___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Moo_Timelin_MoonTimelin_Moo_BlockDamageInterruptionHandl___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[Moon.Timeline.MoonTimeline,Moon.BlockDamageInterruptionHandler][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler___Array
} // namespace app::classes::types
