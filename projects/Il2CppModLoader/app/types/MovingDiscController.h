#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovingDiscController {
        namespace {
            app::MovingDiscController__Class* type_info_ref = nullptr;
        }
        app::MovingDiscController__Class** type_info = &type_info_ref;
        inline app::MovingDiscController__Class* get_class() {
            return il2cpp::get_class<app::MovingDiscController__Class>(type_info, "Moon", "MovingDiscController");
        }
        inline app::MovingDiscController* create() {
            return il2cpp::create_object<app::MovingDiscController>(get_class());
        }
    } // namespace MovingDiscController
} // namespace app::classes::types
