#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsReplayPlayingCondition {
        namespace {
            inline app::IsReplayPlayingCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsReplayPlayingCondition__Class** type_info = &type_info_ref;
        inline app::IsReplayPlayingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsReplayPlayingCondition__Class>(type_info, "", "IsReplayPlayingCondition");
        }
        inline app::IsReplayPlayingCondition* create() {
            return il2cpp::create_object<app::IsReplayPlayingCondition>(get_class());
        }
    } // namespace IsReplayPlayingCondition
} // namespace app::classes::types
