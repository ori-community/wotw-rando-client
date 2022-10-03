#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ScriptRunDelayedStartupFrame {
        namespace {
            app::EarlyUpdate_ScriptRunDelayedStartupFrame__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_ScriptRunDelayedStartupFrame__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_ScriptRunDelayedStartupFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ScriptRunDelayedStartupFrame__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ScriptRunDelayedStartupFrame");
        }
        inline app::EarlyUpdate_ScriptRunDelayedStartupFrame* create() {
            return il2cpp::create_object<app::EarlyUpdate_ScriptRunDelayedStartupFrame>(get_class());
        }
        inline app::EarlyUpdate_ScriptRunDelayedStartupFrame__Boxed* box(app::EarlyUpdate_ScriptRunDelayedStartupFrame value) {
            return il2cpp::box_value<app::EarlyUpdate_ScriptRunDelayedStartupFrame__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ScriptRunDelayedStartupFrame
} // namespace app::classes::types
