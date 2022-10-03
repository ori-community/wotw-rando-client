#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyBuilder__Class** type_info;
        inline app::KeyBuilder__Class* get_class() {
            return il2cpp::get_class<app::KeyBuilder__Class>(type_info, "Mono.Security.Cryptography", "KeyBuilder");
        }
        inline app::KeyBuilder* create() {
            return il2cpp::create_object<app::KeyBuilder>(get_class());
        }
    } // namespace KeyBuilder
} // namespace app::classes::types
