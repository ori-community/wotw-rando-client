#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SignatureDescription {
        namespace {
            inline app::SignatureDescription__Class* type_info_ref = nullptr;
        }
        inline app::SignatureDescription__Class** type_info = &type_info_ref;
        inline app::SignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::SignatureDescription__Class>(type_info, "System.Security.Cryptography", "SignatureDescription");
        }
        inline app::SignatureDescription* create() {
            return il2cpp::create_object<app::SignatureDescription>(get_class());
        }
    } // namespace SignatureDescription
} // namespace app::classes::types
