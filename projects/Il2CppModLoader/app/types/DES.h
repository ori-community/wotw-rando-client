#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DES {
        inline app::DES__Class** type_info = (app::DES__Class**)(modloader::win::memory::resolve_rva(0x04763BD0));
        inline app::DES__Class* get_class() {
            return il2cpp::get_class<app::DES__Class>(type_info, "System.Security.Cryptography", "DES");
        }
        inline app::DES* create() {
            return il2cpp::create_object<app::DES>(get_class());
        }
    } // namespace DES
} // namespace app::classes::types
