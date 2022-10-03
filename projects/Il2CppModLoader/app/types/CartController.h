#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartController {
        namespace {
            app::CartController__Class* type_info_ref = nullptr;
        }
        app::CartController__Class** type_info = &type_info_ref;
        inline app::CartController__Class* get_class() {
            return il2cpp::get_class<app::CartController__Class>(type_info, "", "CartController");
        }
        inline app::CartController* create() {
            return il2cpp::create_object<app::CartController>(get_class());
        }
    } // namespace CartController
} // namespace app::classes::types
