#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPrefabDictionary {
        namespace {
            app::EntityPrefabDictionary__Class* type_info_ref = nullptr;
        }
        app::EntityPrefabDictionary__Class** type_info = &type_info_ref;
        inline app::EntityPrefabDictionary__Class* get_class() {
            return il2cpp::get_class<app::EntityPrefabDictionary__Class>(type_info, "Moon", "EntityPrefabDictionary");
        }
        inline app::EntityPrefabDictionary* create() {
            return il2cpp::create_object<app::EntityPrefabDictionary>(get_class());
        }
    } // namespace EntityPrefabDictionary
} // namespace app::classes::types
