#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyedHashAlgorithm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyedHashAlgorithm__Class** type_info;
        inline app::KeyedHashAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::KeyedHashAlgorithm__Class>(type_info, "System.Security.Cryptography", "KeyedHashAlgorithm");
        }
        inline app::KeyedHashAlgorithm* create() {
            return il2cpp::create_object<app::KeyedHashAlgorithm>(get_class());
        }
    } // namespace KeyedHashAlgorithm
} // namespace app::classes::types
