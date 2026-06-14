#pragma once
#include <Modloader/app/structs/PostLateUpdate_ScriptRunDelayedDynamicFrameRate.h>
#include <Modloader/app/structs/PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_ScriptRunDelayedDynamicFrameRate {
        inline app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class** type_info() {
            static app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ScriptRunDelayedDynamicFrameRate");
        }
        inline app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate* create() {
            return il2cpp::create_object<app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate>(get_class());
        }
        inline app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Boxed* box(app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate value) {
            return il2cpp::box_value<app::PostLateUpdate_ScriptRunDelayedDynamicFrameRate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ScriptRunDelayedDynamicFrameRate
} // namespace app::classes::types
