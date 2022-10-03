#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleScreenManager_Screen__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TitleScreenManager_Screen__Enum__Class** type_info;
        inline app::TitleScreenManager_Screen__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TitleScreenManager_Screen__Enum__Class>(type_info, "", "TitleScreenManager", "Screen");
        }
        inline app::TitleScreenManager_Screen__Enum* create() {
            return il2cpp::create_object<app::TitleScreenManager_Screen__Enum>(get_class());
        }
    } // namespace TitleScreenManager_Screen__Enum
} // namespace app::classes::types
