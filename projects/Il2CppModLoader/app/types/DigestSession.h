#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DigestSession {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DigestSession__Class** type_info;
        inline app::DigestSession__Class* get_class() {
            return il2cpp::get_class<app::DigestSession__Class>(type_info, "System.Net", "DigestSession");
        }
        inline app::DigestSession* create() {
            return il2cpp::create_object<app::DigestSession>(get_class());
        }
    } // namespace DigestSession
} // namespace app::classes::types
