#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Update_ScriptRunBehaviourUpdate {
        namespace {
            inline app::Update_ScriptRunBehaviourUpdate__Class* type_info_ref = nullptr;
        }
        inline app::Update_ScriptRunBehaviourUpdate__Class** type_info = &type_info_ref;
        inline app::Update_ScriptRunBehaviourUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunBehaviourUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunBehaviourUpdate");
        }
        inline app::Update_ScriptRunBehaviourUpdate* create() {
            return il2cpp::create_object<app::Update_ScriptRunBehaviourUpdate>(get_class());
        }
        inline app::Update_ScriptRunBehaviourUpdate__Boxed* box(app::Update_ScriptRunBehaviourUpdate value) {
            return il2cpp::box_value<app::Update_ScriptRunBehaviourUpdate__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunBehaviourUpdate
} // namespace app::classes::types
