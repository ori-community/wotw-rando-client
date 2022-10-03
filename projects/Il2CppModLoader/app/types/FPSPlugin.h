#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSPlugin {
        namespace {
            app::FPSPlugin__Class* type_info_ref = nullptr;
        }
        app::FPSPlugin__Class** type_info = &type_info_ref;
        inline app::FPSPlugin__Class* get_class() {
            return il2cpp::get_class<app::FPSPlugin__Class>(type_info, "", "FPSPlugin");
        }
        inline app::FPSPlugin* create() {
            return il2cpp::create_object<app::FPSPlugin>(get_class());
        }
    } // namespace FPSPlugin
} // namespace app::classes::types
