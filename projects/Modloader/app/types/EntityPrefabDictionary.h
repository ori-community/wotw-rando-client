#pragma once
#include <Modloader/app/structs/EntityPrefabDictionary.h>
#include <Modloader/app/structs/EntityPrefabDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPrefabDictionary {
        inline app::EntityPrefabDictionary__Class** type_info() {
            static app::EntityPrefabDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPrefabDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPrefabDictionary__Class* get_class() {
            return il2cpp::get_class<app::EntityPrefabDictionary__Class>(type_info(), "Moon", "EntityPrefabDictionary");
        }
        inline app::EntityPrefabDictionary* create() {
            return il2cpp::create_object<app::EntityPrefabDictionary>(get_class());
        }
    } // namespace EntityPrefabDictionary
} // namespace app::classes::types
