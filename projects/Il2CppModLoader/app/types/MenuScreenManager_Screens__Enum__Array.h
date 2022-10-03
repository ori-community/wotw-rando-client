#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_Screens__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuScreenManager_Screens__Enum__Array__Class** type_info;
        inline app::MenuScreenManager_Screens__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenManager_Screens__Enum__Array__Class>(type_info, "", "MenuScreenManager+Screens[]");
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create() {
            return il2cpp::create_object<app::MenuScreenManager_Screens__Enum__Array>(get_class());
        }
    } // namespace MenuScreenManager_Screens__Enum__Array
} // namespace app::classes::types
