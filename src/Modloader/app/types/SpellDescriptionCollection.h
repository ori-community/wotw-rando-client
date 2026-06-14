#pragma once
#include <Modloader/app/structs/SpellDescriptionCollection.h>
#include <Modloader/app/structs/SpellDescriptionCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellDescriptionCollection {
        inline app::SpellDescriptionCollection__Class** type_info() {
            static app::SpellDescriptionCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellDescriptionCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellDescriptionCollection__Class>(type_info(), "", "SpellDescriptionCollection");
        }
        inline app::SpellDescriptionCollection* create() {
            return il2cpp::create_object<app::SpellDescriptionCollection>(get_class());
        }
    } // namespace SpellDescriptionCollection
} // namespace app::classes::types
