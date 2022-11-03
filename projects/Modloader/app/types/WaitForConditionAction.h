#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaitForConditionAction {
        namespace {
            inline app::WaitForConditionAction__Class* type_info_ref = nullptr;
        }
        inline app::WaitForConditionAction__Class** type_info = &type_info_ref;
        inline app::WaitForConditionAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForConditionAction__Class>(type_info, "", "WaitForConditionAction");
        }
        inline app::WaitForConditionAction* create() {
            return il2cpp::create_object<app::WaitForConditionAction>(get_class());
        }
    } // namespace WaitForConditionAction
} // namespace app::classes::types
