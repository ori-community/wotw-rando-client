#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneController {
        namespace {
            app::CutsceneController__Class* type_info_ref = nullptr;
        }
        app::CutsceneController__Class** type_info = &type_info_ref;
        inline app::CutsceneController__Class* get_class() {
            return il2cpp::get_class<app::CutsceneController__Class>(type_info, "", "CutsceneController");
        }
        inline app::CutsceneController* create() {
            return il2cpp::create_object<app::CutsceneController>(get_class());
        }
    } // namespace CutsceneController
} // namespace app::classes::types
