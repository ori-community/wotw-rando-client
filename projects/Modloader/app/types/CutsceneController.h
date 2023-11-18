#pragma once
#include <Modloader/app/structs/CutsceneController.h>
#include <Modloader/app/structs/CutsceneController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneController {
        inline app::CutsceneController__Class** type_info() {
            static app::CutsceneController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneController__Class* get_class() {
            return il2cpp::get_class<app::CutsceneController__Class>(type_info(), "", "CutsceneController");
        }
        inline app::CutsceneController* create() {
            return il2cpp::create_object<app::CutsceneController>(get_class());
        }
    } // namespace CutsceneController
} // namespace app::classes::types
