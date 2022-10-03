#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StrongNameKeyPair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StrongNameKeyPair__Class** type_info;
        inline app::StrongNameKeyPair__Class* get_class() {
            return il2cpp::get_class<app::StrongNameKeyPair__Class>(type_info, "System.Reflection", "StrongNameKeyPair");
        }
        inline app::StrongNameKeyPair* create() {
            return il2cpp::create_object<app::StrongNameKeyPair>(get_class());
        }
    } // namespace StrongNameKeyPair
} // namespace app::classes::types
