#pragma once
#include <Modloader/app/structs/PostLateUpdate_TriggerEndOfFrameCallbacks.h>
#include <Modloader/app/structs/PostLateUpdate_TriggerEndOfFrameCallbacks__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_TriggerEndOfFrameCallbacks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_TriggerEndOfFrameCallbacks {
        inline app::PostLateUpdate_TriggerEndOfFrameCallbacks__Class** type_info() {
            static app::PostLateUpdate_TriggerEndOfFrameCallbacks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_TriggerEndOfFrameCallbacks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_TriggerEndOfFrameCallbacks__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_TriggerEndOfFrameCallbacks__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "TriggerEndOfFrameCallbacks");
        }
        inline app::PostLateUpdate_TriggerEndOfFrameCallbacks* create() {
            return il2cpp::create_object<app::PostLateUpdate_TriggerEndOfFrameCallbacks>(get_class());
        }
        inline app::PostLateUpdate_TriggerEndOfFrameCallbacks__Boxed* box(app::PostLateUpdate_TriggerEndOfFrameCallbacks value) {
            return il2cpp::box_value<app::PostLateUpdate_TriggerEndOfFrameCallbacks__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_TriggerEndOfFrameCallbacks
} // namespace app::classes::types
