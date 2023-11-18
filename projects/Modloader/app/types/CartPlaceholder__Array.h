#pragma once
#include <Modloader/app/structs/CartPlaceholder__Array.h>
#include <Modloader/app/structs/CartPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartPlaceholder__Array {
        inline app::CartPlaceholder__Array__Class** type_info() {
            static app::CartPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::CartPlaceholder__Array__Class>(type_info(), "", "CartPlaceholder[]");
        }
        inline app::CartPlaceholder__Array* create() {
            return il2cpp::create_object<app::CartPlaceholder__Array>(get_class());
        }
    } // namespace CartPlaceholder__Array
} // namespace app::classes::types
