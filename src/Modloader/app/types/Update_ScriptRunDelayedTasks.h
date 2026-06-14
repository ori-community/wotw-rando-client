#pragma once
#include <Modloader/app/structs/Update_ScriptRunDelayedTasks.h>
#include <Modloader/app/structs/Update_ScriptRunDelayedTasks__Boxed.h>
#include <Modloader/app/structs/Update_ScriptRunDelayedTasks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Update_ScriptRunDelayedTasks {
        inline app::Update_ScriptRunDelayedTasks__Class** type_info() {
            static app::Update_ScriptRunDelayedTasks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Update_ScriptRunDelayedTasks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Update_ScriptRunDelayedTasks__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunDelayedTasks__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunDelayedTasks");
        }
        inline app::Update_ScriptRunDelayedTasks* create() {
            return il2cpp::create_object<app::Update_ScriptRunDelayedTasks>(get_class());
        }
        inline app::Update_ScriptRunDelayedTasks__Boxed* box(app::Update_ScriptRunDelayedTasks value) {
            return il2cpp::box_value<app::Update_ScriptRunDelayedTasks__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunDelayedTasks
} // namespace app::classes::types
