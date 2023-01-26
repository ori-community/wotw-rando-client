#pragma once
#include <Modloader/app/structs/CartController.h>
#include <Modloader/app/structs/CartController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartController {
        inline app::CartController__Class** type_info() {
            static app::CartController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartController__Class* get_class() {
            return il2cpp::get_class<app::CartController__Class>(type_info(), "", "CartController");
        }
        inline app::CartController* create() {
            return il2cpp::create_object<app::CartController>(get_class());
        }
    } // namespace CartController
} // namespace app::classes::types
