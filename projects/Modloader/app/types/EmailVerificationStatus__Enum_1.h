#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmailVerificationStatus__Enum_1__Class.h>
#include <Modloader/app/structs/EmailVerificationStatus__Enum_1.h>

namespace app::classes::types {
    namespace EmailVerificationStatus__Enum_1 {
        namespace {
            inline app::EmailVerificationStatus__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::EmailVerificationStatus__Enum_1__Class** type_info = &type_info_ref;
        inline app::EmailVerificationStatus__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::EmailVerificationStatus__Enum_1__Class>(type_info, "PlayFab.ServerModels", "EmailVerificationStatus");
        }
        inline app::EmailVerificationStatus__Enum_1* create() {
            return il2cpp::create_object<app::EmailVerificationStatus__Enum_1>(get_class());
        }
    } // namespace EmailVerificationStatus__Enum_1
} // namespace app::classes::types
