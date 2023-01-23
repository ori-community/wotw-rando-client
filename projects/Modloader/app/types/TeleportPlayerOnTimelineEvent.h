#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent__Class.h>
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent.h>

namespace app::classes::types {
    namespace TeleportPlayerOnTimelineEvent {
        namespace {
            inline app::TeleportPlayerOnTimelineEvent__Class* type_info_ref = nullptr;
        }
        inline app::TeleportPlayerOnTimelineEvent__Class** type_info = &type_info_ref;
        inline app::TeleportPlayerOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::TeleportPlayerOnTimelineEvent__Class>(type_info, "", "TeleportPlayerOnTimelineEvent");
        }
        inline app::TeleportPlayerOnTimelineEvent* create() {
            return il2cpp::create_object<app::TeleportPlayerOnTimelineEvent>(get_class());
        }
    } // namespace TeleportPlayerOnTimelineEvent
} // namespace app::classes::types
