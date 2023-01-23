#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ToggleSettingsAction__Class.h>
#include <Modloader/app/structs/ToggleSettingsAction.h>

namespace app::classes::types {
    namespace ToggleSettingsAction {
        namespace {
            inline app::ToggleSettingsAction__Class* type_info_ref = nullptr;
        }
        inline app::ToggleSettingsAction__Class** type_info = &type_info_ref;
        inline app::ToggleSettingsAction__Class* get_class() {
            return il2cpp::get_class<app::ToggleSettingsAction__Class>(type_info, "", "ToggleSettingsAction");
        }
        inline app::ToggleSettingsAction* create() {
            return il2cpp::create_object<app::ToggleSettingsAction>(get_class());
        }
    } // namespace ToggleSettingsAction
} // namespace app::classes::types
