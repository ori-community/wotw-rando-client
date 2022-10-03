#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeLicenseContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeLicenseContext__Class** type_info;
        inline app::RuntimeLicenseContext__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLicenseContext__Class>(type_info, "System.ComponentModel.Design", "RuntimeLicenseContext");
        }
        inline app::RuntimeLicenseContext* create() {
            return il2cpp::create_object<app::RuntimeLicenseContext>(get_class());
        }
    } // namespace RuntimeLicenseContext
} // namespace app::classes::types
