#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeySizes__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeySizes__Array__Class** type_info;
        inline app::KeySizes__Array__Class* get_class() {
            return il2cpp::get_class<app::KeySizes__Array__Class>(type_info, "System.Security.Cryptography", "KeySizes[]");
        }
        inline app::KeySizes__Array* create() {
            return il2cpp::create_object<app::KeySizes__Array>(get_class());
        }
    } // namespace KeySizes__Array
} // namespace app::classes::types
