#pragma once
#include <Modloader/app/structs/ClearSkipCutsceneAction.h>
#include <Modloader/app/structs/ClearSkipCutsceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearSkipCutsceneAction {
        inline app::ClearSkipCutsceneAction__Class** type_info() {
            static app::ClearSkipCutsceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearSkipCutsceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearSkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::ClearSkipCutsceneAction__Class>(type_info(), "", "ClearSkipCutsceneAction");
        }
        inline app::ClearSkipCutsceneAction* create() {
            return il2cpp::create_object<app::ClearSkipCutsceneAction>(get_class());
        }
    } // namespace ClearSkipCutsceneAction
} // namespace app::classes::types
