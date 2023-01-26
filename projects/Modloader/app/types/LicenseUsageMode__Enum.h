#pragma once
#include <Modloader/app/structs/LicenseUsageMode__Enum.h>
#include <Modloader/app/structs/LicenseUsageMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseUsageMode__Enum {
        inline app::LicenseUsageMode__Enum__Class** type_info() {
            static app::LicenseUsageMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LicenseUsageMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LicenseUsageMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LicenseUsageMode__Enum__Class>(type_info(), "System.ComponentModel", "LicenseUsageMode");
        }
        inline app::LicenseUsageMode__Enum* create() {
            return il2cpp::create_object<app::LicenseUsageMode__Enum>(get_class());
        }
    } // namespace LicenseUsageMode__Enum
} // namespace app::classes::types
