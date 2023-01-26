#pragma once
#include <Modloader/app/structs/CartEnter.h>
#include <Modloader/app/structs/CartEnter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartEnter {
        inline app::CartEnter__Class** type_info() {
            static app::CartEnter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartEnter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartEnter__Class* get_class() {
            return il2cpp::get_class<app::CartEnter__Class>(type_info(), "", "CartEnter");
        }
        inline app::CartEnter* create() {
            return il2cpp::create_object<app::CartEnter>(get_class());
        }
    } // namespace CartEnter
} // namespace app::classes::types
