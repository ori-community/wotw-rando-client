#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplicationSettingsGroup__Class.h>
#include <Modloader/app/structs/ApplicationSettingsGroup.h>

namespace app::classes::types {
    namespace ApplicationSettingsGroup {
        namespace {
            inline app::ApplicationSettingsGroup__Class* type_info_ref = nullptr;
        }
        inline app::ApplicationSettingsGroup__Class** type_info = &type_info_ref;
        inline app::ApplicationSettingsGroup__Class* get_class() {
            return il2cpp::get_class<app::ApplicationSettingsGroup__Class>(type_info, "System.Configuration", "ApplicationSettingsGroup");
        }
        inline app::ApplicationSettingsGroup* create() {
            return il2cpp::create_object<app::ApplicationSettingsGroup>(get_class());
        }
    } // namespace ApplicationSettingsGroup
} // namespace app::classes::types
