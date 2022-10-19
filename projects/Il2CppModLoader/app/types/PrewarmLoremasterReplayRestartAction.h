#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
