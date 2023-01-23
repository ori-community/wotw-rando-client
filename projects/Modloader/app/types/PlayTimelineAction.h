#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayTimelineAction__Class.h>
#include <Modloader/app/structs/PlayTimelineAction.h>

namespace app::classes::types {
    namespace PlayTimelineAction {
        namespace {
            inline app::PlayTimelineAction__Class* type_info_ref = nullptr;
        }
        inline app::PlayTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineAction__Class>(type_info, "", "PlayTimelineAction");
        }
        inline app::PlayTimelineAction* create() {
            return il2cpp::create_object<app::PlayTimelineAction>(get_class());
        }
    } // namespace PlayTimelineAction
} // namespace app::classes::types
