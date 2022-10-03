#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1SignatureFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAPKCS1SignatureFormatter__Class** type_info;
        inline app::RSAPKCS1SignatureFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1SignatureFormatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
        }
        inline app::RSAPKCS1SignatureFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1SignatureFormatter>(get_class());
        }
    } // namespace RSAPKCS1SignatureFormatter
} // namespace app::classes::types
