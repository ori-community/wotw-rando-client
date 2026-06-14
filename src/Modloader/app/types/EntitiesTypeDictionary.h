#pragma once
#include <Modloader/app/structs/EntitiesTypeDictionary.h>
#include <Modloader/app/structs/EntitiesTypeDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntitiesTypeDictionary {
        inline app::EntitiesTypeDictionary__Class** type_info() {
            static app::EntitiesTypeDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntitiesTypeDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntitiesTypeDictionary__Class* get_class() {
            return il2cpp::get_class<app::EntitiesTypeDictionary__Class>(type_info(), "Moon", "EntitiesTypeDictionary");
        }
        inline app::EntitiesTypeDictionary* create() {
            return il2cpp::create_object<app::EntitiesTypeDictionary>(get_class());
        }
    } // namespace EntitiesTypeDictionary
} // namespace app::classes::types
