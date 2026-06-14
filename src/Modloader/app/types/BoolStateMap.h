#pragma once
#include <Modloader/app/structs/BoolStateMap.h>
#include <Modloader/app/structs/BoolStateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoolStateMap {
        inline app::BoolStateMap__Class** type_info() {
            static app::BoolStateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoolStateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoolStateMap__Class* get_class() {
            return il2cpp::get_class<app::BoolStateMap__Class>(type_info(), "", "BoolStateMap");
        }
        inline app::BoolStateMap* create() {
            return il2cpp::create_object<app::BoolStateMap>(get_class());
        }
    } // namespace BoolStateMap
} // namespace app::classes::types
