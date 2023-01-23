#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggerEventBroadcaster__Class.h>
#include <Modloader/app/structs/TriggerEventBroadcaster.h>

namespace app::classes::types {
    namespace TriggerEventBroadcaster {
        namespace {
            inline app::TriggerEventBroadcaster__Class* type_info_ref = nullptr;
        }
        inline app::TriggerEventBroadcaster__Class** type_info = &type_info_ref;
        inline app::TriggerEventBroadcaster__Class* get_class() {
            return il2cpp::get_class<app::TriggerEventBroadcaster__Class>(type_info, "RootMotion", "TriggerEventBroadcaster");
        }
        inline app::TriggerEventBroadcaster* create() {
            return il2cpp::create_object<app::TriggerEventBroadcaster>(get_class());
        }
    } // namespace TriggerEventBroadcaster
} // namespace app::classes::types
