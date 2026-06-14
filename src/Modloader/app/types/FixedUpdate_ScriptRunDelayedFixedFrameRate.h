#pragma once
#include <Modloader/app/structs/FixedUpdate_ScriptRunDelayedFixedFrameRate.h>
#include <Modloader/app/structs/FixedUpdate_ScriptRunDelayedFixedFrameRate__Boxed.h>
#include <Modloader/app/structs/FixedUpdate_ScriptRunDelayedFixedFrameRate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_ScriptRunDelayedFixedFrameRate {
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class** type_info() {
            static app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "ScriptRunDelayedFixedFrameRate");
        }
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate* create() {
            return il2cpp::create_object<app::FixedUpdate_ScriptRunDelayedFixedFrameRate>(get_class());
        }
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Boxed* box(app::FixedUpdate_ScriptRunDelayedFixedFrameRate value) {
            return il2cpp::box_value<app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_ScriptRunDelayedFixedFrameRate
} // namespace app::classes::types
