#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmailVerificationStatus__Enum__Class.h>
#include <Modloader/app/structs/EmailVerificationStatus__Enum.h>

namespace app::classes::types {
    namespace EmailVerificationStatus__Enum {
        inline app::EmailVerificationStatus__Enum__Class** type_info = (app::EmailVerificationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BF90));
        inline app::EmailVerificationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmailVerificationStatus__Enum__Class>(type_info, "PlayFab.ClientModels", "EmailVerificationStatus");
        }
        inline app::EmailVerificationStatus__Enum* create() {
            return il2cpp::create_object<app::EmailVerificationStatus__Enum>(get_class());
        }
    } // namespace EmailVerificationStatus__Enum
} // namespace app::classes::types
