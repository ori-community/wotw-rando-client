#pragma once
#include <Modloader/app/structs/NPCTypeDictionary.h>
#include <Modloader/app/structs/NPCTypeDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCTypeDictionary {
        inline app::NPCTypeDictionary__Class** type_info() {
            static app::NPCTypeDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCTypeDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCTypeDictionary__Class* get_class() {
            return il2cpp::get_class<app::NPCTypeDictionary__Class>(type_info(), "Moon", "NPCTypeDictionary");
        }
        inline app::NPCTypeDictionary* create() {
            return il2cpp::create_object<app::NPCTypeDictionary>(get_class());
        }
    } // namespace NPCTypeDictionary
} // namespace app::classes::types
