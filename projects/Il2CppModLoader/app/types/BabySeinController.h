#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySeinController {
        namespace {
            app::BabySeinController__Class* type_info_ref = nullptr;
        }
        app::BabySeinController__Class** type_info = &type_info_ref;
        inline app::BabySeinController__Class* get_class() {
            return il2cpp::get_class<app::BabySeinController__Class>(type_info, "", "BabySeinController");
        }
        inline app::BabySeinController* create() {
            return il2cpp::create_object<app::BabySeinController>(get_class());
        }
    } // namespace BabySeinController
} // namespace app::classes::types
