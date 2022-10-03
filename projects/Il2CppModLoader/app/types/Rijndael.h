#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rijndael {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rijndael__Class** type_info;
        inline app::Rijndael__Class* get_class() {
            return il2cpp::get_class<app::Rijndael__Class>(type_info, "System.Security.Cryptography", "Rijndael");
        }
        inline app::Rijndael* create() {
            return il2cpp::create_object<app::Rijndael>(get_class());
        }
    } // namespace Rijndael
} // namespace app::classes::types
