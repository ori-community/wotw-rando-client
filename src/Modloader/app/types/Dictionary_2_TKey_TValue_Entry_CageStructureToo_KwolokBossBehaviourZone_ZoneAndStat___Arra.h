#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_CageStructureToo_KwolokBossBehaviourZone_ZoneAndSta___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_CageStructureToo_KwolokBossBehaviourZone_ZoneAndStat___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[CageStructureTool,KwolokBossBehaviourZones+ZoneAndState][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_CageStructureTool_KwolokBossBehaviourZones_ZoneAndState___Array
} // namespace app::classes::types
