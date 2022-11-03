#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Update_ScriptRunDelayedDynamicFrameRate {
        namespace {
            inline app::Update_ScriptRunDelayedDynamicFrameRate__Class* type_info_ref = nullptr;
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Class** type_info = &type_info_ref;
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunDelayedDynamicFrameRate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunDelayedDynamicFrameRate");
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate* create() {
            return il2cpp::create_object<app::Update_ScriptRunDelayedDynamicFrameRate>(get_class());
        }
        inline app::Update_ScriptRunDelayedDynamicFrameRate__Boxed* box(app::Update_ScriptRunDelayedDynamicFrameRate value) {
            return il2cpp::box_value<app::Update_ScriptRunDelayedDynamicFrameRate__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunDelayedDynamicFrameRate
} // namespace app::classes::types
