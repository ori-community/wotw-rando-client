#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_Screens__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MenuScreenManager_Screens__Enum__Class** type_info;
        inline app::MenuScreenManager_Screens__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_Screens__Enum__Class>(type_info, "", "MenuScreenManager", "Screens");
        }
        inline app::MenuScreenManager_Screens__Enum* create() {
            return il2cpp::create_object<app::MenuScreenManager_Screens__Enum>(get_class());
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MenuScreenManager_Screens__Enum__Array>(get_class(), size);
        }
        inline app::MenuScreenManager_Screens__Enum__Array* create_array(const std::vector<app::MenuScreenManager_Screens__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::MenuScreenManager_Screens__Enum__Array>(get_class(), items);
        }
    } // namespace MenuScreenManager_Screens__Enum
} // namespace app::classes::types
