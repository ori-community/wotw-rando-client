#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveConfigurableJointAction {
        namespace {
            inline app::RemoveConfigurableJointAction__Class* type_info_ref = nullptr;
        }
        inline app::RemoveConfigurableJointAction__Class** type_info = &type_info_ref;
        inline app::RemoveConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::RemoveConfigurableJointAction__Class>(type_info, "", "RemoveConfigurableJointAction");
        }
        inline app::RemoveConfigurableJointAction* create() {
            return il2cpp::create_object<app::RemoveConfigurableJointAction>(get_class());
        }
    } // namespace RemoveConfigurableJointAction
} // namespace app::classes::types
