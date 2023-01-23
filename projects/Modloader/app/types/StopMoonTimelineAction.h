#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StopMoonTimelineAction__Class.h>
#include <Modloader/app/structs/StopMoonTimelineAction.h>

namespace app::classes::types {
    namespace StopMoonTimelineAction {
        namespace {
            inline app::StopMoonTimelineAction__Class* type_info_ref = nullptr;
        }
        inline app::StopMoonTimelineAction__Class** type_info = &type_info_ref;
        inline app::StopMoonTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::StopMoonTimelineAction__Class>(type_info, "", "StopMoonTimelineAction");
        }
        inline app::StopMoonTimelineAction* create() {
            return il2cpp::create_object<app::StopMoonTimelineAction>(get_class());
        }
    } // namespace StopMoonTimelineAction
} // namespace app::classes::types
