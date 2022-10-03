#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockController {
        namespace {
            app::FloatingRockController__Class* type_info_ref = nullptr;
        }
        app::FloatingRockController__Class** type_info = &type_info_ref;
        inline app::FloatingRockController__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockController__Class>(type_info, "", "FloatingRockController");
        }
        inline app::FloatingRockController* create() {
            return il2cpp::create_object<app::FloatingRockController>(get_class());
        }
    } // namespace FloatingRockController
} // namespace app::classes::types
