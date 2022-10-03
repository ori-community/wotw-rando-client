#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameController_LoadAssets_d_182 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameController_LoadAssets_d_182__Class** type_info;
        inline app::GameController_LoadAssets_d_182__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_LoadAssets_d_182__Class>(type_info, "", "GameController", "<LoadAssets>d__182");
        }
        inline app::GameController_LoadAssets_d_182* create() {
            return il2cpp::create_object<app::GameController_LoadAssets_d_182>(get_class());
        }
    } // namespace GameController_LoadAssets_d_182
} // namespace app::classes::types
