#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayRestartAction__Class.h>
#include <Modloader/app/structs/PrewarmLoremasterReplayRestartAction.h>

namespace app::classes::types {
    namespace PrewarmLoremasterReplayRestartAction {
        namespace {
            inline app::PrewarmLoremasterReplayRestartAction__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmLoremasterReplayRestartAction__Class** type_info = &type_info_ref;
        inline app::PrewarmLoremasterReplayRestartAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmLoremasterReplayRestartAction__Class>(type_info, "", "PrewarmLoremasterReplayRestartAction");
        }
        inline app::PrewarmLoremasterReplayRestartAction* create() {
            return il2cpp::create_object<app::PrewarmLoremasterReplayRestartAction>(get_class());
        }
    } // namespace PrewarmLoremasterReplayRestartAction
} // namespace app::classes::types
