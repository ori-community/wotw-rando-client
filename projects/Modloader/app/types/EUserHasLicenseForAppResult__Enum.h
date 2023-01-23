#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum__Class.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum.h>

namespace app::classes::types {
    namespace EUserHasLicenseForAppResult__Enum {
        namespace {
            inline app::EUserHasLicenseForAppResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EUserHasLicenseForAppResult__Enum__Class** type_info = &type_info_ref;
        inline app::EUserHasLicenseForAppResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUserHasLicenseForAppResult__Enum__Class>(type_info, "Steamworks", "EUserHasLicenseForAppResult");
        }
        inline app::EUserHasLicenseForAppResult__Enum* create() {
            return il2cpp::create_object<app::EUserHasLicenseForAppResult__Enum>(get_class());
        }
    } // namespace EUserHasLicenseForAppResult__Enum
} // namespace app::classes::types
