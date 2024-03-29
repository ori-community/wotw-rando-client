#pragma once
#include <Modloader/app/structs/Update_ScriptRunDelayedDynamicFrameRate.h>
#include <Modloader/app/structs/Update_ScriptRunDelayedDynamicFrameRate__Boxed.h>
#include <Modloader/app/structs/Update_ScriptRunDelayedDynamicFrameRate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Update_ScriptRunDelayedDynamicFrameRate {
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Class** type_info() {
            static app::Update_ScriptRunDelayedDynamicFrameRate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Update_ScriptRunDelayedDynamicFrameRate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunDelayedDynamicFrameRate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunDelayedDynamicFrameRate");
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate* create() {
            return il2cpp::create_object<app::Update_ScriptRunDelayedDynamicFrameRate>(get_class());
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Boxed* box(app::Update_ScriptRunDelayedDynamicFrameRate value) {
            return il2cpp::box_value<app::Update_ScriptRunDelayedDynamicFrameRate__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunDelayedDynamicFrameRate
} // namespace app::classes::types
