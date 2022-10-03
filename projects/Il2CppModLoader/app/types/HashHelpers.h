#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashHelpers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HashHelpers__Class** type_info;
        inline app::HashHelpers__Class* get_class() {
            return il2cpp::get_class<app::HashHelpers__Class>(type_info, "System.Numerics.Hashing", "HashHelpers");
        }
        inline app::HashHelpers* create() {
            return il2cpp::create_object<app::HashHelpers>(get_class());
        }
    } // namespace HashHelpers
} // namespace app::classes::types
