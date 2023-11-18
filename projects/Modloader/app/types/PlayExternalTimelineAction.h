#pragma once
#include <Modloader/app/structs/PlayExternalTimelineAction.h>
#include <Modloader/app/structs/PlayExternalTimelineAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayExternalTimelineAction {
        inline app::PlayExternalTimelineAction__Class** type_info() {
            static app::PlayExternalTimelineAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayExternalTimelineAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayExternalTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayExternalTimelineAction__Class>(type_info(), "", "PlayExternalTimelineAction");
        }
        inline app::PlayExternalTimelineAction* create() {
            return il2cpp::create_object<app::PlayExternalTimelineAction>(get_class());
        }
    } // namespace PlayExternalTimelineAction
} // namespace app::classes::types
