#pragma once
#include <Modloader/app/structs/BoolStateMap_Mapping__Array.h>
#include <Modloader/app/structs/BoolStateMap_Mapping__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoolStateMap_Mapping__Array {
        inline app::BoolStateMap_Mapping__Array__Class** type_info() {
            static app::BoolStateMap_Mapping__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoolStateMap_Mapping__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoolStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::BoolStateMap_Mapping__Array__Class>(type_info(), "", "BoolStateMap+Mapping[]");
        }
        inline app::BoolStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::BoolStateMap_Mapping__Array>(get_class());
        }
    } // namespace BoolStateMap_Mapping__Array
} // namespace app::classes::types
