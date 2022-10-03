#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftMenuManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftMenuManager_c__Class** type_info;
        inline app::LeftMenuManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftMenuManager_c__Class>(type_info, "", "LeftMenuManager", "<>c");
        }
        inline app::LeftMenuManager_c* create() {
            return il2cpp::create_object<app::LeftMenuManager_c>(get_class());
        }
    } // namespace LeftMenuManager_c
} // namespace app::classes::types
