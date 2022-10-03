#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UI_Cameras {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UI_Cameras__Class** type_info;
        inline app::UI_Cameras__Class* get_class() {
            return il2cpp::get_nested_class<app::UI_Cameras__Class>(type_info, "Game", "UI", "Cameras");
        }
        inline app::UI_Cameras* create() {
            return il2cpp::create_object<app::UI_Cameras>(get_class());
        }
    } // namespace UI_Cameras
} // namespace app::classes::types
