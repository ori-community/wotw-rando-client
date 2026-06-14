#pragma once
#include <Modloader/app/structs/GoToSceneController.h>
#include <Modloader/app/structs/GoToSceneController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoToSceneController {
        inline app::GoToSceneController__Class** type_info() {
            static app::GoToSceneController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoToSceneController__Class**)(modloader::win::memory::resolve_rva(0x0474A7D0));
            }
            return cache;
        }
        inline app::GoToSceneController__Class* get_class() {
            return il2cpp::get_class<app::GoToSceneController__Class>(type_info(), "", "GoToSceneController");
        }
        inline app::GoToSceneController* create() {
            return il2cpp::create_object<app::GoToSceneController>(get_class());
        }
    } // namespace GoToSceneController
} // namespace app::classes::types
