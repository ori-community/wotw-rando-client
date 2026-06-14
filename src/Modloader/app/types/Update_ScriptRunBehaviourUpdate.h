#pragma once
#include <Modloader/app/structs/Update_ScriptRunBehaviourUpdate.h>
#include <Modloader/app/structs/Update_ScriptRunBehaviourUpdate__Boxed.h>
#include <Modloader/app/structs/Update_ScriptRunBehaviourUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Update_ScriptRunBehaviourUpdate {
        inline app::Update_ScriptRunBehaviourUpdate__Class** type_info() {
            static app::Update_ScriptRunBehaviourUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Update_ScriptRunBehaviourUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Update_ScriptRunBehaviourUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunBehaviourUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunBehaviourUpdate");
        }
        inline app::Update_ScriptRunBehaviourUpdate* create() {
            return il2cpp::create_object<app::Update_ScriptRunBehaviourUpdate>(get_class());
        }
        inline app::Update_ScriptRunBehaviourUpdate__Boxed* box(app::Update_ScriptRunBehaviourUpdate value) {
            return il2cpp::box_value<app::Update_ScriptRunBehaviourUpdate__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunBehaviourUpdate
} // namespace app::classes::types
