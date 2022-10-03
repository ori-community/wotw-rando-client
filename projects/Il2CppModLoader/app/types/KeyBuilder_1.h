#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyBuilder_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyBuilder_1__Class** type_info;
        inline app::KeyBuilder_1__Class* get_class() {
            return il2cpp::get_class<app::KeyBuilder_1__Class>(type_info, "Mono.Security.Cryptography", "KeyBuilder");
        }
        inline app::KeyBuilder_1* create() {
            return il2cpp::create_object<app::KeyBuilder_1>(get_class());
        }
    } // namespace KeyBuilder_1
} // namespace app::classes::types
