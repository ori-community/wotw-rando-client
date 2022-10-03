#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_ScriptRunDelayedFixedFrameRate {
        namespace {
            app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class* type_info_ref = nullptr;
        }
        app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "ScriptRunDelayedFixedFrameRate");
        }
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate* create() {
            return il2cpp::create_object<app::FixedUpdate_ScriptRunDelayedFixedFrameRate>(get_class());
        }
        inline app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Boxed* box(app::FixedUpdate_ScriptRunDelayedFixedFrameRate value) {
            return il2cpp::box_value<app::FixedUpdate_ScriptRunDelayedFixedFrameRate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_ScriptRunDelayedFixedFrameRate
} // namespace app::classes::types
