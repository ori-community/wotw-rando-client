#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes {
        inline app::PKCS12_DeriveBytes__Class** type_info = (app::PKCS12_DeriveBytes__Class**)(modloader::win::memory::resolve_rva(0x04776A70));
        inline app::PKCS12_DeriveBytes__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes__Class>(type_info, "Mono.Security.X509", "PKCS12", "DeriveBytes");
        }
        inline app::PKCS12_DeriveBytes* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes>(get_class());
        }
    } // namespace PKCS12_DeriveBytes
} // namespace app::classes::types
