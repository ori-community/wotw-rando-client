#pragma once
#include <Modloader/app/structs/UserLicenseInformation.h>
#include <Modloader/app/structs/UserLicenseInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserLicenseInformation {
        inline app::UserLicenseInformation__Class** type_info() {
            static app::UserLicenseInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserLicenseInformation__Class**)(modloader::win::memory::resolve_rva(0x04721388));
            }
            return cache;
        }
        inline app::UserLicenseInformation__Class* get_class() {
            return il2cpp::get_class<app::UserLicenseInformation__Class>(type_info(), "", "UserLicenseInformation");
        }
        inline app::UserLicenseInformation* create() {
            return il2cpp::create_object<app::UserLicenseInformation>(get_class());
        }
    } // namespace UserLicenseInformation
} // namespace app::classes::types
