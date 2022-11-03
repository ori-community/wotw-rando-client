#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseProviderAttribute {
        inline app::LicenseProviderAttribute__Class** type_info = (app::LicenseProviderAttribute__Class**)(modloader::win::memory::resolve_rva(0x04718F40));
        inline app::LicenseProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::LicenseProviderAttribute__Class>(type_info, "System.ComponentModel", "LicenseProviderAttribute");
        }
        inline app::LicenseProviderAttribute* create() {
            return il2cpp::create_object<app::LicenseProviderAttribute>(get_class());
        }
    } // namespace LicenseProviderAttribute
} // namespace app::classes::types
