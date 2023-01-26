#pragma once
#include <Modloader/app/structs/UnlockCutsceneAction.h>
#include <Modloader/app/structs/UnlockCutsceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockCutsceneAction {
        inline app::UnlockCutsceneAction__Class** type_info() {
            static app::UnlockCutsceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnlockCutsceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnlockCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::UnlockCutsceneAction__Class>(type_info(), "", "UnlockCutsceneAction");
        }
        inline app::UnlockCutsceneAction* create() {
            return il2cpp::create_object<app::UnlockCutsceneAction>(get_class());
        }
    } // namespace UnlockCutsceneAction
} // namespace app::classes::types
