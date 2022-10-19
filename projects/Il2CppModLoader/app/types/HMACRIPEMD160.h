#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HMACRIPEMD160 {
        inline app::HMACRIPEMD160__Class** type_info = (app::HMACRIPEMD160__Class**)(modloader::win::memory::resolve_rva(0x0472D548));
        inline app::HMACRIPEMD160__Class* get_class() {
            return il2cpp::get_class<app::HMACRIPEMD160__Class>(type_info, "System.Security.Cryptography", "HMACRIPEMD160");
        }
        inline app::HMACRIPEMD160* create() {
            return il2cpp::create_object<app::HMACRIPEMD160>(get_class());
        }
    } // namespace HMACRIPEMD160
} // namespace app::classes::types
