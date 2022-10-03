#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HelperGhostController {
        namespace {
            app::HelperGhostController__Class* type_info_ref = nullptr;
        }
        app::HelperGhostController__Class** type_info = &type_info_ref;
        inline app::HelperGhostController__Class* get_class() {
            return il2cpp::get_class<app::HelperGhostController__Class>(type_info, "", "HelperGhostController");
        }
        inline app::HelperGhostController* create() {
            return il2cpp::create_object<app::HelperGhostController>(get_class());
        }
    } // namespace HelperGhostController
} // namespace app::classes::types
