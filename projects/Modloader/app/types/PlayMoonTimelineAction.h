#pragma once
#include <Modloader/app/structs/PlayMoonTimelineAction.h>
#include <Modloader/app/structs/PlayMoonTimelineAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayMoonTimelineAction {
        inline app::PlayMoonTimelineAction__Class** type_info() {
            static app::PlayMoonTimelineAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayMoonTimelineAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayMoonTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimelineAction__Class>(type_info(), "", "PlayMoonTimelineAction");
        }
        inline app::PlayMoonTimelineAction* create() {
            return il2cpp::create_object<app::PlayMoonTimelineAction>(get_class());
        }
    } // namespace PlayMoonTimelineAction
} // namespace app::classes::types
