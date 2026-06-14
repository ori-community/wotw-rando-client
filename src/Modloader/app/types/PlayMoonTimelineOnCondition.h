#pragma once
#include <Modloader/app/structs/PlayMoonTimelineOnCondition.h>
#include <Modloader/app/structs/PlayMoonTimelineOnCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayMoonTimelineOnCondition {
        inline app::PlayMoonTimelineOnCondition__Class** type_info() {
            static app::PlayMoonTimelineOnCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayMoonTimelineOnCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayMoonTimelineOnCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimelineOnCondition__Class>(type_info(), "", "PlayMoonTimelineOnCondition");
        }
        inline app::PlayMoonTimelineOnCondition* create() {
            return il2cpp::create_object<app::PlayMoonTimelineOnCondition>(get_class());
        }
    } // namespace PlayMoonTimelineOnCondition
} // namespace app::classes::types
