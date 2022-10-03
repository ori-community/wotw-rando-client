#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrewarmLoremasterReplayExitAction {
        namespace {
            app::PrewarmLoremasterReplayExitAction__Class* type_info_ref = nullptr;
        }
        app::PrewarmLoremasterReplayExitAction__Class** type_info = &type_info_ref;
        inline app::PrewarmLoremasterReplayExitAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmLoremasterReplayExitAction__Class>(type_info, "", "PrewarmLoremasterReplayExitAction");
        }
        inline app::PrewarmLoremasterReplayExitAction* create() {
            return il2cpp::create_object<app::PrewarmLoremasterReplayExitAction>(get_class());
        }
    } // namespace PrewarmLoremasterReplayExitAction
} // namespace app::classes::types
