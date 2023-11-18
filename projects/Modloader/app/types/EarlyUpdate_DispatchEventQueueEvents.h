#pragma once
#include <Modloader/app/structs/EarlyUpdate_DispatchEventQueueEvents.h>
#include <Modloader/app/structs/EarlyUpdate_DispatchEventQueueEvents__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_DispatchEventQueueEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_DispatchEventQueueEvents {
        inline app::EarlyUpdate_DispatchEventQueueEvents__Class** type_info() {
            static app::EarlyUpdate_DispatchEventQueueEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_DispatchEventQueueEvents__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_DispatchEventQueueEvents__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_DispatchEventQueueEvents__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "DispatchEventQueueEvents");
        }
        inline app::EarlyUpdate_DispatchEventQueueEvents* create() {
            return il2cpp::create_object<app::EarlyUpdate_DispatchEventQueueEvents>(get_class());
        }
        inline app::EarlyUpdate_DispatchEventQueueEvents__Boxed* box(app::EarlyUpdate_DispatchEventQueueEvents value) {
            return il2cpp::box_value<app::EarlyUpdate_DispatchEventQueueEvents__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_DispatchEventQueueEvents
} // namespace app::classes::types
