#pragma once
#include <Modloader/app/structs/RegisterSkipCutsceneAction.h>
#include <Modloader/app/structs/RegisterSkipCutsceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterSkipCutsceneAction {
        inline app::RegisterSkipCutsceneAction__Class** type_info() {
            static app::RegisterSkipCutsceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegisterSkipCutsceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegisterSkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::RegisterSkipCutsceneAction__Class>(type_info(), "", "RegisterSkipCutsceneAction");
        }
        inline app::RegisterSkipCutsceneAction* create() {
            return il2cpp::create_object<app::RegisterSkipCutsceneAction>(get_class());
        }
    } // namespace RegisterSkipCutsceneAction
} // namespace app::classes::types
