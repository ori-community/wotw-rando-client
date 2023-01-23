#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedUpdate_ScriptRunBehaviourFixedUpdate__Class.h>
#include <Modloader/app/structs/FixedUpdate_ScriptRunBehaviourFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_ScriptRunBehaviourFixedUpdate__Boxed.h>

namespace app::classes::types {
    namespace FixedUpdate_ScriptRunBehaviourFixedUpdate {
        namespace {
            inline app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_ScriptRunBehaviourFixedUpdate__Class** type_info = &type_info_ref;
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
