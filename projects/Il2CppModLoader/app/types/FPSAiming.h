#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSAiming {
        namespace {
            app::FPSAiming__Class* type_info_ref = nullptr;
        }
        app::FPSAiming__Class** type_info = &type_info_ref;
        inline app::FPSAiming__Class* get_class() {
            return il2cpp::get_class<app::FPSAiming__Class>(type_info, "RootMotion.Demos", "FPSAiming");
        }
        inline app::FPSAiming* create() {
            return il2cpp::create_object<app::FPSAiming>(get_class());
        }
    } // namespace FPSAiming
} // namespace app::classes::types
