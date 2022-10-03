#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PondController {
        namespace {
            app::PondController__Class* type_info_ref = nullptr;
        }
        app::PondController__Class** type_info = &type_info_ref;
        inline app::PondController__Class* get_class() {
            return il2cpp::get_class<app::PondController__Class>(type_info, "", "PondController");
        }
        inline app::PondController* create() {
            return il2cpp::create_object<app::PondController>(get_class());
        }
    } // namespace PondController
} // namespace app::classes::types
