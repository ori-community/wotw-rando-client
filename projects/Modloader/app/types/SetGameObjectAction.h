#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGameObjectAction__Class.h>
#include <Modloader/app/structs/SetGameObjectAction.h>

namespace app::classes::types {
    namespace SetGameObjectAction {
        namespace {
            inline app::SetGameObjectAction__Class* type_info_ref = nullptr;
        }
        inline app::SetGameObjectAction__Class** type_info = &type_info_ref;
        inline app::SetGameObjectAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameObjectAction__Class>(type_info, "Moon.BehaviourSystem", "SetGameObjectAction");
        }
        inline app::SetGameObjectAction* create() {
            return il2cpp::create_object<app::SetGameObjectAction>(get_class());
        }
    } // namespace SetGameObjectAction
} // namespace app::classes::types
