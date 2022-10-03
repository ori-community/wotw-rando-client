#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsReplayPlayingCondition {
        namespace {
            app::IsReplayPlayingCondition__Class* type_info_ref = nullptr;
        }
        app::IsReplayPlayingCondition__Class** type_info = &type_info_ref;
        inline app::IsReplayPlayingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsReplayPlayingCondition__Class>(type_info, "", "IsReplayPlayingCondition");
        }
        inline app::IsReplayPlayingCondition* create() {
            return il2cpp::create_object<app::IsReplayPlayingCondition>(get_class());
        }
    } // namespace IsReplayPlayingCondition
} // namespace app::classes::types
