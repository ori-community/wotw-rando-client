#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayExternalTimelineAction {
        namespace {
            inline app::PlayExternalTimelineAction__Class* type_info_ref = nullptr;
        }
        inline app::PlayExternalTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayExternalTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayExternalTimelineAction__Class>(type_info, "", "PlayExternalTimelineAction");
        }
        inline app::PlayExternalTimelineAction* create() {
            return il2cpp::create_object<app::PlayExternalTimelineAction>(get_class());
        }
    } // namespace PlayExternalTimelineAction
} // namespace app::classes::types
