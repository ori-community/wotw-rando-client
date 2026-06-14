#pragma once
#include <Modloader/app/structs/PrewarmLoremasterReplayRestartAction.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayRestartAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmLoremasterReplayRestartAction {
        inline app::PrewarmLoremasterReplayRestartAction__Class** type_info() {
            static app::PrewarmLoremasterReplayRestartAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrewarmLoremasterReplayRestartAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrewarmLoremasterReplayRestartAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmLoremasterReplayRestartAction__Class>(type_info(), "", "PrewarmLoremasterReplayRestartAction");
        }
        inline app::PrewarmLoremasterReplayRestartAction* create() {
            return il2cpp::create_object<app::PrewarmLoremasterReplayRestartAction>(get_class());
        }
    } // namespace PrewarmLoremasterReplayRestartAction
} // namespace app::classes::types
