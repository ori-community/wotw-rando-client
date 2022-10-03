#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumTools {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumTools__Class** type_info;
        inline app::EnumTools__Class* get_class() {
            return il2cpp::get_class<app::EnumTools__Class>(type_info, "", "EnumTools");
        }
        inline app::EnumTools* create() {
            return il2cpp::create_object<app::EnumTools>(get_class());
        }
    } // namespace EnumTools
} // namespace app::classes::types
