#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkipCutsceneController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkipCutsceneController__Class** type_info;
        inline app::SkipCutsceneController__Class* get_class() {
            return il2cpp::get_class<app::SkipCutsceneController__Class>(type_info, "", "SkipCutsceneController");
        }
        inline app::SkipCutsceneController* create() {
            return il2cpp::create_object<app::SkipCutsceneController>(get_class());
        }
    } // namespace SkipCutsceneController
} // namespace app::classes::types
