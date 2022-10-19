#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyedHashAlgorithm {
        inline app::KeyedHashAlgorithm__Class** type_info = (app::KeyedHashAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x0477FBD8));
        inline app::KeyedHashAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::KeyedHashAlgorithm__Class>(type_info, "System.Security.Cryptography", "KeyedHashAlgorithm");
        }
        inline app::KeyedHashAlgorithm* create() {
            return il2cpp::create_object<app::KeyedHashAlgorithm>(get_class());
        }
    } // namespace KeyedHashAlgorithm
} // namespace app::classes::types
