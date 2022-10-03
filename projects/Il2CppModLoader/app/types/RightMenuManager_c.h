#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RightMenuManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RightMenuManager_c__Class** type_info;
        inline app::RightMenuManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RightMenuManager_c__Class>(type_info, "", "RightMenuManager", "<>c");
        }
        inline app::RightMenuManager_c* create() {
            return il2cpp::create_object<app::RightMenuManager_c>(get_class());
        }
    } // namespace RightMenuManager_c
} // namespace app::classes::types
