#pragma once
#include <Modloader/app/structs/WatchCutsceneAction.h>
#include <Modloader/app/structs/WatchCutsceneAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WatchCutsceneAction {
        inline app::WatchCutsceneAction__Class** type_info() {
            static app::WatchCutsceneAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WatchCutsceneAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WatchCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::WatchCutsceneAction__Class>(type_info(), "", "WatchCutsceneAction");
        }
        inline app::WatchCutsceneAction* create() {
            return il2cpp::create_object<app::WatchCutsceneAction>(get_class());
        }
    } // namespace WatchCutsceneAction
} // namespace app::classes::types
