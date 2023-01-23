#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayRandomTimelineAction__Class.h>
#include <Modloader/app/structs/PlayRandomTimelineAction.h>

namespace app::classes::types {
    namespace PlayRandomTimelineAction {
        namespace {
            inline app::PlayRandomTimelineAction__Class* type_info_ref = nullptr;
        }
        inline app::PlayRandomTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayRandomTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomTimelineAction__Class>(type_info, "", "PlayRandomTimelineAction");
        }
        inline app::PlayRandomTimelineAction* create() {
            return il2cpp::create_object<app::PlayRandomTimelineAction>(get_class());
        }
    } // namespace PlayRandomTimelineAction
} // namespace app::classes::types
