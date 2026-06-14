#pragma once
#include <Modloader/app/structs/NPCIconsCollection.h>
#include <Modloader/app/structs/NPCIconsCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCIconsCollection {
        inline app::NPCIconsCollection__Class** type_info() {
            static app::NPCIconsCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCIconsCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::NPCIconsCollection__Class>(type_info(), "Moon", "NPCIconsCollection");
        }
        inline app::NPCIconsCollection* create() {
            return il2cpp::create_object<app::NPCIconsCollection>(get_class());
        }
    } // namespace NPCIconsCollection
} // namespace app::classes::types
