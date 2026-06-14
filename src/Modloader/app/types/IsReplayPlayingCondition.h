#pragma once
#include <Modloader/app/structs/IsReplayPlayingCondition.h>
#include <Modloader/app/structs/IsReplayPlayingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsReplayPlayingCondition {
        inline app::IsReplayPlayingCondition__Class** type_info() {
            static app::IsReplayPlayingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsReplayPlayingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsReplayPlayingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsReplayPlayingCondition__Class>(type_info(), "", "IsReplayPlayingCondition");
        }
        inline app::IsReplayPlayingCondition* create() {
            return il2cpp::create_object<app::IsReplayPlayingCondition>(get_class());
        }
    } // namespace IsReplayPlayingCondition
} // namespace app::classes::types
