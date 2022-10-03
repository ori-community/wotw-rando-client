#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCIconsCollection {
        namespace {
            app::NPCIconsCollection__Class* type_info_ref = nullptr;
        }
        app::NPCIconsCollection__Class** type_info = &type_info_ref;
        inline app::NPCIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::NPCIconsCollection__Class>(type_info, "Moon", "NPCIconsCollection");
        }
        inline app::NPCIconsCollection* create() {
            return il2cpp::create_object<app::NPCIconsCollection>(get_class());
        }
    } // namespace NPCIconsCollection
} // namespace app::classes::types
