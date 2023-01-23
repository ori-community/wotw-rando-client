#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreLateUpdate_ScriptRunBehaviourLateUpdate__Class.h>
#include <Modloader/app/structs/PreLateUpdate_ScriptRunBehaviourLateUpdate.h>
#include <Modloader/app/structs/PreLateUpdate_ScriptRunBehaviourLateUpdate__Boxed.h>

namespace app::classes::types {
    namespace PreLateUpdate_ScriptRunBehaviourLateUpdate {
        namespace {
            inline app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Class** type_info = &type_info_ref;
        inline app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "ScriptRunBehaviourLateUpdate");
        }
        inline app::PreLateUpdate_ScriptRunBehaviourLateUpdate* create() {
            return il2cpp::create_object<app::PreLateUpdate_ScriptRunBehaviourLateUpdate>(get_class());
        }
        inline app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Boxed* box(app::PreLateUpdate_ScriptRunBehaviourLateUpdate value) {
            return il2cpp::box_value<app::PreLateUpdate_ScriptRunBehaviourLateUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_ScriptRunBehaviourLateUpdate
} // namespace app::classes::types
