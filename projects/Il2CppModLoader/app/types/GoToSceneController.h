#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GoToSceneController {
        inline app::GoToSceneController__Class** type_info = (app::GoToSceneController__Class**)(modloader::win::memory::resolve_rva(0x0474A7D0));
        inline app::GoToSceneController__Class* get_class() {
            return il2cpp::get_class<app::GoToSceneController__Class>(type_info, "", "GoToSceneController");
        }
        inline app::GoToSceneController* create() {
            return il2cpp::create_object<app::GoToSceneController>(get_class());
        }
    } // namespace GoToSceneController
} // namespace app::classes::types
