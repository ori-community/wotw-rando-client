#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpCodes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpCodes__Class** type_info;
        inline app::OpCodes__Class* get_class() {
            return il2cpp::get_class<app::OpCodes__Class>(type_info, "System.Reflection.Emit", "OpCodes");
        }
        inline app::OpCodes* create() {
            return il2cpp::create_object<app::OpCodes>(get_class());
        }
    } // namespace OpCodes
} // namespace app::classes::types
