#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDoubleJump {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDoubleJump__Class** type_info;
        inline app::SeinDoubleJump__Class* get_class() {
            return il2cpp::get_class<app::SeinDoubleJump__Class>(type_info, "", "SeinDoubleJump");
        }
        inline app::SeinDoubleJump* create() {
            return il2cpp::create_object<app::SeinDoubleJump>(get_class());
        }
    } // namespace SeinDoubleJump
} // namespace app::classes::types
