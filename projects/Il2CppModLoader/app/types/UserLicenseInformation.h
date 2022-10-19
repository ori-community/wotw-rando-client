#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserLicenseInformation {
        inline app::UserLicenseInformation__Class** type_info = (app::UserLicenseInformation__Class**)(modloader::win::memory::resolve_rva(0x04721388));
        inline app::UserLicenseInformation__Class* get_class() {
            return il2cpp::get_class<app::UserLicenseInformation__Class>(type_info, "", "UserLicenseInformation");
        }
        inline app::UserLicenseInformation* create() {
            return il2cpp::create_object<app::UserLicenseInformation>(get_class());
        }
    } // namespace UserLicenseInformation
} // namespace app::classes::types
