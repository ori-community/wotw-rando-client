#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HMACSHA1 {
        inline app::HMACSHA1__Class** type_info = (app::HMACSHA1__Class**)(modloader::win::memory::resolve_rva(0x04785CB0));
        inline app::HMACSHA1__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA1__Class>(type_info, "System.Security.Cryptography", "HMACSHA1");
        }
        inline app::HMACSHA1* create() {
            return il2cpp::create_object<app::HMACSHA1>(get_class());
        }
    } // namespace HMACSHA1
} // namespace app::classes::types
