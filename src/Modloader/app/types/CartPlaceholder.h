#pragma once
#include <Modloader/app/structs/CartPlaceholder.h>
#include <Modloader/app/structs/CartPlaceholder__Array.h>
#include <Modloader/app/structs/CartPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartPlaceholder {
        inline app::CartPlaceholder__Class** type_info() {
            static app::CartPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CartPlaceholder__Class>(type_info(), "", "CartPlaceholder");
        }
        inline app::CartPlaceholder* create() {
            return il2cpp::create_object<app::CartPlaceholder>(get_class());
        }
        inline app::CartPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::CartPlaceholder__Array>(get_class(), size);
        }
        inline app::CartPlaceholder__Array* create_array(const std::vector<app::CartPlaceholder*>& items) {
            return il2cpp::array_new<app::CartPlaceholder__Array>(get_class(), items);
        }
    } // namespace CartPlaceholder
} // namespace app::classes::types
