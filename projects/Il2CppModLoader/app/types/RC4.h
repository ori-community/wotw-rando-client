#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RC4 {
        inline app::RC4__Class** type_info = (app::RC4__Class**)(modloader::win::memory::resolve_rva(0x04741500));
        inline app::RC4__Class* get_class() {
            return il2cpp::get_class<app::RC4__Class>(type_info, "Mono.Security.Cryptography", "RC4");
        }
        inline app::RC4* create() {
            return il2cpp::create_object<app::RC4>(get_class());
        }
    } // namespace RC4
} // namespace app::classes::types
