#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowManager_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowManager_1__Class** type_info;
        inline app::WindowManager_1__Class* get_class() {
            return il2cpp::get_class<app::WindowManager_1__Class>(type_info, "Moon.UI", "WindowManager");
        }
        inline app::WindowManager_1* create() {
            return il2cpp::create_object<app::WindowManager_1>(get_class());
        }
    } // namespace WindowManager_1
} // namespace app::classes::types
