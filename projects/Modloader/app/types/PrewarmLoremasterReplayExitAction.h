#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayExitAction__Class.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayExitAction.h>

namespace app::classes::types {
    namespace PrewarmLoremasterReplayExitAction {
        namespace {
            inline app::PrewarmLoremasterReplayExitAction__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmLoremasterReplayExitAction__Class** type_info = &type_info_ref;
        inline app::PrewarmLoremasterReplayExitAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmLoremasterReplayExitAction__Class>(type_info, "", "PrewarmLoremasterReplayExitAction");
        }
        inline app::PrewarmLoremasterReplayExitAction* create() {
            return il2cpp::create_object<app::PrewarmLoremasterReplayExitAction>(get_class());
        }
    } // namespace PrewarmLoremasterReplayExitAction
} // namespace app::classes::types
