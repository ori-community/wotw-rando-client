#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CredentialUse__Enum {
        namespace {
            app::CredentialUse__Enum__Class* type_info_ref = nullptr;
        }
        app::CredentialUse__Enum__Class** type_info = &type_info_ref;
        inline app::CredentialUse__Enum__Class* get_class() {
            return il2cpp::get_class<app::CredentialUse__Enum__Class>(type_info, "System.Net", "CredentialUse");
        }
        inline app::CredentialUse__Enum* create() {
            return il2cpp::create_object<app::CredentialUse__Enum>(get_class());
        }
    } // namespace CredentialUse__Enum
} // namespace app::classes::types
