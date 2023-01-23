#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserSettingsGroup__Class.h>
#include <Modloader/app/structs/UserSettingsGroup.h>

namespace app::classes::types {
    namespace UserSettingsGroup {
        namespace {
            inline app::UserSettingsGroup__Class* type_info_ref = nullptr;
        }
        inline app::UserSettingsGroup__Class** type_info = &type_info_ref;
        inline app::UserSettingsGroup__Class* get_class() {
            return il2cpp::get_class<app::UserSettingsGroup__Class>(type_info, "System.Configuration", "UserSettingsGroup");
        }
        inline app::UserSettingsGroup* create() {
            return il2cpp::create_object<app::UserSettingsGroup>(get_class());
        }
    } // namespace UserSettingsGroup
} // namespace app::classes::types
