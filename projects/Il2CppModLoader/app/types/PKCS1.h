#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS1 {
        inline app::PKCS1__Class** type_info = (app::PKCS1__Class**)(modloader::win::memory::resolve_rva(0x04730B18));
        inline app::PKCS1__Class* get_class() {
            return il2cpp::get_class<app::PKCS1__Class>(type_info, "Mono.Security.Cryptography", "PKCS1");
        }
        inline app::PKCS1* create() {
            return il2cpp::create_object<app::PKCS1>(get_class());
        }
    } // namespace PKCS1
} // namespace app::classes::types
