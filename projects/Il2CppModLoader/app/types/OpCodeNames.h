#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpCodeNames {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpCodeNames__Class** type_info;
        inline app::OpCodeNames__Class* get_class() {
            return il2cpp::get_class<app::OpCodeNames__Class>(type_info, "System.Reflection.Emit", "OpCodeNames");
        }
        inline app::OpCodeNames* create() {
            return il2cpp::create_object<app::OpCodeNames>(get_class());
        }
    } // namespace OpCodeNames
} // namespace app::classes::types
