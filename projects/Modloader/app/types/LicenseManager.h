#pragma once
#include <Modloader/app/structs/LicenseManager.h>
#include <Modloader/app/structs/LicenseManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseManager {
        inline app::LicenseManager__Class** type_info() {
            static app::LicenseManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LicenseManager__Class**)(modloader::win::memory::resolve_rva(0x04738798));
            }
            return cache;
        }
        inline app::LicenseManager__Class* get_class() {
            return il2cpp::get_class<app::LicenseManager__Class>(type_info(), "System.ComponentModel", "LicenseManager");
        }
        inline app::LicenseManager* create() {
            return il2cpp::create_object<app::LicenseManager>(get_class());
        }
    } // namespace LicenseManager
} // namespace app::classes::types
