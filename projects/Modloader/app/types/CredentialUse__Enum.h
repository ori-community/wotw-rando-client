#pragma once
#include <Modloader/app/structs/CredentialUse__Enum.h>
#include <Modloader/app/structs/CredentialUse__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CredentialUse__Enum {
        inline app::CredentialUse__Enum__Class** type_info() {
            static app::CredentialUse__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CredentialUse__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CredentialUse__Enum__Class* get_class() {
            return il2cpp::get_class<app::CredentialUse__Enum__Class>(type_info(), "System.Net", "CredentialUse");
        }
        inline app::CredentialUse__Enum* create() {
            return il2cpp::create_object<app::CredentialUse__Enum>(get_class());
        }
    } // namespace CredentialUse__Enum
} // namespace app::classes::types
