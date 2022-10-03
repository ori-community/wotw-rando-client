#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockCutsceneAction {
        namespace {
            app::UnlockCutsceneAction__Class* type_info_ref = nullptr;
        }
        app::UnlockCutsceneAction__Class** type_info = &type_info_ref;
        inline app::UnlockCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::UnlockCutsceneAction__Class>(type_info, "", "UnlockCutsceneAction");
        }
        inline app::UnlockCutsceneAction* create() {
            return il2cpp::create_object<app::UnlockCutsceneAction>(get_class());
        }
    } // namespace UnlockCutsceneAction
} // namespace app::classes::types
