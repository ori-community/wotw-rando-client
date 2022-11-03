#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformLoremasterReplayExitAction {
        namespace {
            inline app::PerformLoremasterReplayExitAction__Class* type_info_ref = nullptr;
        }
        inline app::PerformLoremasterReplayExitAction__Class** type_info = &type_info_ref;
        inline app::PerformLoremasterReplayExitAction__Class* get_class() {
            return il2cpp::get_class<app::PerformLoremasterReplayExitAction__Class>(type_info, "", "PerformLoremasterReplayExitAction");
        }
        inline app::PerformLoremasterReplayExitAction* create() {
            return il2cpp::create_object<app::PerformLoremasterReplayExitAction>(get_class());
        }
    } // namespace PerformLoremasterReplayExitAction
} // namespace app::classes::types
