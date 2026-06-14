#pragma once
#include <Modloader/app/structs/PerformLoremasterReplayRestartAction.h>
#include <Modloader/app/structs/PerformLoremasterReplayRestartAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformLoremasterReplayRestartAction {
        inline app::PerformLoremasterReplayRestartAction__Class** type_info() {
            static app::PerformLoremasterReplayRestartAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerformLoremasterReplayRestartAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerformLoremasterReplayRestartAction__Class* get_class() {
            return il2cpp::get_class<app::PerformLoremasterReplayRestartAction__Class>(type_info(), "", "PerformLoremasterReplayRestartAction");
        }
        inline app::PerformLoremasterReplayRestartAction* create() {
            return il2cpp::create_object<app::PerformLoremasterReplayRestartAction>(get_class());
        }
    } // namespace PerformLoremasterReplayRestartAction
} // namespace app::classes::types
