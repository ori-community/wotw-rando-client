#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController {
        namespace {
            app::WiggleTreeController__Class* type_info_ref = nullptr;
        }
        app::WiggleTreeController__Class** type_info = &type_info_ref;
        inline app::WiggleTreeController__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController__Class>(type_info, "", "WiggleTreeController");
        }
        inline app::WiggleTreeController* create() {
            return il2cpp::create_object<app::WiggleTreeController>(get_class());
        }
    } // namespace WiggleTreeController
} // namespace app::classes::types
