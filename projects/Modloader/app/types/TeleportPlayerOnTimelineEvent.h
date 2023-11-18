#pragma once
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent.h>
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TeleportPlayerOnTimelineEvent {
        inline app::TeleportPlayerOnTimelineEvent__Class** type_info() {
            static app::TeleportPlayerOnTimelineEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TeleportPlayerOnTimelineEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TeleportPlayerOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::TeleportPlayerOnTimelineEvent__Class>(type_info(), "", "TeleportPlayerOnTimelineEvent");
        }
        inline app::TeleportPlayerOnTimelineEvent* create() {
            return il2cpp::create_object<app::TeleportPlayerOnTimelineEvent>(get_class());
        }
    } // namespace TeleportPlayerOnTimelineEvent
} // namespace app::classes::types
