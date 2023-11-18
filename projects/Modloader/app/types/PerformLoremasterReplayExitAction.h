#pragma once
#include <Modloader/app/structs/PerformLoremasterReplayExitAction.h>
#include <Modloader/app/structs/PerformLoremasterReplayExitAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformLoremasterReplayExitAction {
        inline app::PerformLoremasterReplayExitAction__Class** type_info() {
            static app::PerformLoremasterReplayExitAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerformLoremasterReplayExitAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerformLoremasterReplayExitAction__Class* get_class() {
            return il2cpp::get_class<app::PerformLoremasterReplayExitAction__Class>(type_info(), "", "PerformLoremasterReplayExitAction");
        }
        inline app::PerformLoremasterReplayExitAction* create() {
            return il2cpp::create_object<app::PerformLoremasterReplayExitAction>(get_class());
        }
    } // namespace PerformLoremasterReplayExitAction
} // namespace app::classes::types
