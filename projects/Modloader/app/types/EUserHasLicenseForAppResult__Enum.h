#pragma once
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUserHasLicenseForAppResult__Enum {
        inline app::EUserHasLicenseForAppResult__Enum__Class** type_info() {
            static app::EUserHasLicenseForAppResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUserHasLicenseForAppResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUserHasLicenseForAppResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserHasLicenseForAppResult__Enum__Class>(type_info(), "Steamworks", "EUserHasLicenseForAppResult");
        }
        inline app::EUserHasLicenseForAppResult__Enum* create() {
            return il2cpp::create_object<app::EUserHasLicenseForAppResult__Enum>(get_class());
        }
    } // namespace EUserHasLicenseForAppResult__Enum
} // namespace app::classes::types
