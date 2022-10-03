#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoToSceneController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GoToSceneController__Class** type_info;
        inline app::GoToSceneController__Class* get_class() {
            return il2cpp::get_class<app::GoToSceneController__Class>(type_info, "", "GoToSceneController");
        }
        inline app::GoToSceneController* create() {
            return il2cpp::create_object<app::GoToSceneController>(get_class());
        }
    } // namespace GoToSceneController
} // namespace app::classes::types
