#pragma once
#include <Modloader/app/structs/KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array.h>
#include <Modloader/app/structs/KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array {
        inline app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class** type_info() {
            static app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[AbilityType,List`1[Moon.ComboSystem.ComboMove]][]");
        }
        inline app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array>(get_class());
        }
    } // namespace KeyValuePair_2_AbilityType_List_1_Moon_ComboSystem_ComboMove___Array
} // namespace app::classes::types
