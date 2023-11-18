#pragma once
#include <Modloader/app/structs/LicenseProviderAttribute.h>
#include <Modloader/app/structs/LicenseProviderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseProviderAttribute {
        inline app::LicenseProviderAttribute__Class** type_info() {
            static app::LicenseProviderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LicenseProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x04718F40));
            }
            return cache;
        }
        inline app::LicenseProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::LicenseProviderAttribute__Class>(type_info(), "System.ComponentModel", "LicenseProviderAttribute");
        }
        inline app::LicenseProviderAttribute* create() {
            return il2cpp::create_object<app::LicenseProviderAttribute>(get_class());
        }
    } // namespace LicenseProviderAttribute
} // namespace app::classes::types
