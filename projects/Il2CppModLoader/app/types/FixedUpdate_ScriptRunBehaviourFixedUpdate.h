#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdate_ScriptRunBehaviourFixedUpdate {
        namespace {
            app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class* type_info_ref = nullptr;
        }
        app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "ScriptRunBehaviourFixedUpdate");
        }
        inline app::FixedUpdate_ScriptRunBehaviourFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_ScriptRunBehaviourFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Boxed* box(app::FixedUpdate_ScriptRunBehaviourFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_ScriptRunBehaviourFixedUpdate
} // namespace app::classes::types
