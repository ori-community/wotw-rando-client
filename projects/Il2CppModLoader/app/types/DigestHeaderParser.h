#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DigestHeaderParser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DigestHeaderParser__Class** type_info;
        inline app::DigestHeaderParser__Class* get_class() {
            return il2cpp::get_class<app::DigestHeaderParser__Class>(type_info, "System.Net", "DigestHeaderParser");
        }
        inline app::DigestHeaderParser* create() {
            return il2cpp::create_object<app::DigestHeaderParser>(get_class());
        }
    } // namespace DigestHeaderParser
} // namespace app::classes::types
