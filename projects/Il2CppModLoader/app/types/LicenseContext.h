#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicenseContext {
        namespace {
            app::LicenseContext__Class* type_info_ref = nullptr;
        }
        app::LicenseContext__Class** type_info = &type_info_ref;
        inline app::LicenseContext__Class* get_class() {
            return il2cpp::get_class<app::LicenseContext__Class>(type_info, "System.ComponentModel", "LicenseContext");
        }
        inline app::LicenseContext* create() {
            return il2cpp::create_object<app::LicenseContext>(get_class());
        }
    } // namespace LicenseContext
} // namespace app::classes::types
