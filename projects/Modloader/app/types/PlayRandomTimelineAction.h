#pragma once
#include <Modloader/app/structs/PlayRandomTimelineAction.h>
#include <Modloader/app/structs/PlayRandomTimelineAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayRandomTimelineAction {
        inline app::PlayRandomTimelineAction__Class** type_info() {
            static app::PlayRandomTimelineAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayRandomTimelineAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayRandomTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomTimelineAction__Class>(type_info(), "", "PlayRandomTimelineAction");
        }
        inline app::PlayRandomTimelineAction* create() {
            return il2cpp::create_object<app::PlayRandomTimelineAction>(get_class());
        }
    } // namespace PlayRandomTimelineAction
} // namespace app::classes::types
