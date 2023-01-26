#pragma once
#include <Modloader/app/structs/SpellIconsCollection.h>
#include <Modloader/app/structs/SpellIconsCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellIconsCollection {
        inline app::SpellIconsCollection__Class** type_info() {
            static app::SpellIconsCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellIconsCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellIconsCollection__Class>(type_info(), "", "SpellIconsCollection");
        }
        inline app::SpellIconsCollection* create() {
            return il2cpp::create_object<app::SpellIconsCollection>(get_class());
        }
    } // namespace SpellIconsCollection
} // namespace app::classes::types
