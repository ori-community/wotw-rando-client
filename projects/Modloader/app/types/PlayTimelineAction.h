#pragma once
#include <Modloader/app/structs/PlayTimelineAction.h>
#include <Modloader/app/structs/PlayTimelineAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayTimelineAction {
        inline app::PlayTimelineAction__Class** type_info() {
            static app::PlayTimelineAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayTimelineAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineAction__Class>(type_info(), "", "PlayTimelineAction");
        }
        inline app::PlayTimelineAction* create() {
            return il2cpp::create_object<app::PlayTimelineAction>(get_class());
        }
    } // namespace PlayTimelineAction
} // namespace app::classes::types
