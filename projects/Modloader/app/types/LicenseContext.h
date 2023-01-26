#pragma once
#include <Modloader/app/structs/LicenseContext.h>
#include <Modloader/app/structs/LicenseContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseContext {
        inline app::LicenseContext__Class** type_info() {
            static app::LicenseContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LicenseContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LicenseContext__Class* get_class() {
            return il2cpp::get_class<app::LicenseContext__Class>(type_info(), "System.ComponentModel", "LicenseContext");
        }
        inline app::LicenseContext* create() {
            return il2cpp::create_object<app::LicenseContext>(get_class());
        }
    } // namespace LicenseContext
} // namespace app::classes::types
