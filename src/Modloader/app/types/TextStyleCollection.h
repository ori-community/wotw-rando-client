#pragma once
#include <Modloader/app/structs/TextStyleCollection.h>
#include <Modloader/app/structs/TextStyleCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextStyleCollection {
        inline app::TextStyleCollection__Class** type_info() {
            static app::TextStyleCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextStyleCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextStyleCollection__Class* get_class() {
            return il2cpp::get_class<app::TextStyleCollection__Class>(type_info(), "CatlikeCoding.TextBox", "TextStyleCollection");
        }
        inline app::TextStyleCollection* create() {
            return il2cpp::create_object<app::TextStyleCollection>(get_class());
        }
    } // namespace TextStyleCollection
} // namespace app::classes::types
