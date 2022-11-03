#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableSceneSuspendedAction {
        namespace {
            inline app::EnableSceneSuspendedAction__Class* type_info_ref = nullptr;
        }
        inline app::EnableSceneSuspendedAction__Class** type_info = &type_info_ref;
        inline app::EnableSceneSuspendedAction__Class* get_class() {
            return il2cpp::get_class<app::EnableSceneSuspendedAction__Class>(type_info, "", "EnableSceneSuspendedAction");
        }
        inline app::EnableSceneSuspendedAction* create() {
            return il2cpp::create_object<app::EnableSceneSuspendedAction>(get_class());
        }
    } // namespace EnableSceneSuspendedAction
} // namespace app::classes::types
