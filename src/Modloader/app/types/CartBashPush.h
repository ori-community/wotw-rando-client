#pragma once
#include <Modloader/app/structs/CartBashPush.h>
#include <Modloader/app/structs/CartBashPush__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartBashPush {
        inline app::CartBashPush__Class** type_info() {
            static app::CartBashPush__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartBashPush__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartBashPush__Class* get_class() {
            return il2cpp::get_class<app::CartBashPush__Class>(type_info(), "", "CartBashPush");
        }
        inline app::CartBashPush* create() {
            return il2cpp::create_object<app::CartBashPush>(get_class());
        }
    } // namespace CartBashPush
} // namespace app::classes::types
