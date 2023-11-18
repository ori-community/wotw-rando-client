#pragma once
#include <Modloader/app/structs/CartographerPlaceholder.h>
#include <Modloader/app/structs/CartographerPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartographerPlaceholder {
        inline app::CartographerPlaceholder__Class** type_info() {
            static app::CartographerPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartographerPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartographerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CartographerPlaceholder__Class>(type_info(), "", "CartographerPlaceholder");
        }
        inline app::CartographerPlaceholder* create() {
            return il2cpp::create_object<app::CartographerPlaceholder>(get_class());
        }
    } // namespace CartographerPlaceholder
} // namespace app::classes::types
