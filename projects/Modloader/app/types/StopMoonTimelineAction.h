#pragma once
#include <Modloader/app/structs/StopMoonTimelineAction.h>
#include <Modloader/app/structs/StopMoonTimelineAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StopMoonTimelineAction {
        inline app::StopMoonTimelineAction__Class** type_info() {
            static app::StopMoonTimelineAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StopMoonTimelineAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StopMoonTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::StopMoonTimelineAction__Class>(type_info(), "", "StopMoonTimelineAction");
        }
        inline app::StopMoonTimelineAction* create() {
            return il2cpp::create_object<app::StopMoonTimelineAction>(get_class());
        }
    } // namespace StopMoonTimelineAction
} // namespace app::classes::types
