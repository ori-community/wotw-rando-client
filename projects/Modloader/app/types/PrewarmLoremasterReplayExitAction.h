#pragma once
#include <Modloader/app/structs/PrewarmLoremasterReplayExitAction.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayExitAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmLoremasterReplayExitAction {
        inline app::PrewarmLoremasterReplayExitAction__Class** type_info() {
            static app::PrewarmLoremasterReplayExitAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrewarmLoremasterReplayExitAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrewarmLoremasterReplayExitAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmLoremasterReplayExitAction__Class>(type_info(), "", "PrewarmLoremasterReplayExitAction");
        }
        inline app::PrewarmLoremasterReplayExitAction* create() {
            return il2cpp::create_object<app::PrewarmLoremasterReplayExitAction>(get_class());
        }
    } // namespace PrewarmLoremasterReplayExitAction
} // namespace app::classes::types
