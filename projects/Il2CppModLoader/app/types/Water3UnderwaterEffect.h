#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Water3UnderwaterEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Water3UnderwaterEffect__Class** type_info;
        inline app::Water3UnderwaterEffect__Class* get_class() {
            return il2cpp::get_class<app::Water3UnderwaterEffect__Class>(type_info, "", "Water3UnderwaterEffect");
        }
        inline app::Water3UnderwaterEffect* create() {
            return il2cpp::create_object<app::Water3UnderwaterEffect>(get_class());
        }
    } // namespace Water3UnderwaterEffect
} // namespace app::classes::types
