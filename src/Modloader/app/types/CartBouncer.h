#pragma once
#include <Modloader/app/structs/CartBouncer.h>
#include <Modloader/app/structs/CartBouncer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartBouncer {
        inline app::CartBouncer__Class** type_info() {
            static app::CartBouncer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartBouncer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartBouncer__Class* get_class() {
            return il2cpp::get_class<app::CartBouncer__Class>(type_info(), "", "CartBouncer");
        }
        inline app::CartBouncer* create() {
            return il2cpp::create_object<app::CartBouncer>(get_class());
        }
    } // namespace CartBouncer
} // namespace app::classes::types
