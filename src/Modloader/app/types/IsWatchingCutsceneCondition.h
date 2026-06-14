#pragma once
#include <Modloader/app/structs/IsWatchingCutsceneCondition.h>
#include <Modloader/app/structs/IsWatchingCutsceneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsWatchingCutsceneCondition {
        inline app::IsWatchingCutsceneCondition__Class** type_info() {
            static app::IsWatchingCutsceneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsWatchingCutsceneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsWatchingCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWatchingCutsceneCondition__Class>(type_info(), "", "IsWatchingCutsceneCondition");
        }
        inline app::IsWatchingCutsceneCondition* create() {
            return il2cpp::create_object<app::IsWatchingCutsceneCondition>(get_class());
        }
    } // namespace IsWatchingCutsceneCondition
} // namespace app::classes::types
