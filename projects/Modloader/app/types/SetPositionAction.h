#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetPositionAction__Class.h>
#include <Modloader/app/structs/SetPositionAction.h>

namespace app::classes::types {
    namespace SetPositionAction {
        namespace {
            inline app::SetPositionAction__Class* type_info_ref = nullptr;
        }
        inline app::SetPositionAction__Class** type_info = &type_info_ref;
        inline app::SetPositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetPositionAction__Class>(type_info, "", "SetPositionAction");
        }
        inline app::SetPositionAction* create() {
            return il2cpp::create_object<app::SetPositionAction>(get_class());
        }
    } // namespace SetPositionAction
} // namespace app::classes::types
