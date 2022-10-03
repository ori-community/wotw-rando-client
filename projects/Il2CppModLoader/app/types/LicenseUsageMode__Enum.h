#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LicenseUsageMode__Enum {
        namespace {
            app::LicenseUsageMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LicenseUsageMode__Enum__Class** type_info = &type_info_ref;
        inline app::LicenseUsageMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LicenseUsageMode__Enum__Class>(type_info, "System.ComponentModel", "LicenseUsageMode");
        }
        inline app::LicenseUsageMode__Enum* create() {
            return il2cpp::create_object<app::LicenseUsageMode__Enum>(get_class());
        }
    } // namespace LicenseUsageMode__Enum
} // namespace app::classes::types
