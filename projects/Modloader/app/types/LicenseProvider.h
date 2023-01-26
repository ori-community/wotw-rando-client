#pragma once
#include <Modloader/app/structs/LicenseProvider.h>
#include <Modloader/app/structs/LicenseProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseProvider {
        inline app::LicenseProvider__Class** type_info() {
            static app::LicenseProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LicenseProvider__Class**)(modloader::win::memory::resolve_rva(0x04733738));
            }
            return cache;
        }
        inline app::LicenseProvider__Class* get_class() {
            return il2cpp::get_class<app::LicenseProvider__Class>(type_info(), "System.ComponentModel", "LicenseProvider");
        }
        inline app::LicenseProvider* create() {
            return il2cpp::create_object<app::LicenseProvider>(get_class());
        }
    } // namespace LicenseProvider
} // namespace app::classes::types
