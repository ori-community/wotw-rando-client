#pragma once
#include <Modloader/app/structs/TriggerEventBroadcaster.h>
#include <Modloader/app/structs/TriggerEventBroadcaster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerEventBroadcaster {
        inline app::TriggerEventBroadcaster__Class** type_info() {
            static app::TriggerEventBroadcaster__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerEventBroadcaster__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerEventBroadcaster__Class* get_class() {
            return il2cpp::get_class<app::TriggerEventBroadcaster__Class>(type_info(), "RootMotion", "TriggerEventBroadcaster");
        }
        inline app::TriggerEventBroadcaster* create() {
            return il2cpp::create_object<app::TriggerEventBroadcaster>(get_class());
        }
    } // namespace TriggerEventBroadcaster
} // namespace app::classes::types
