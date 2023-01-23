#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplicationSettingsBase__Class.h>
#include <Modloader/app/structs/ApplicationSettingsBase.h>

namespace app::classes::types {
    namespace ApplicationSettingsBase {
        namespace {
            inline app::ApplicationSettingsBase__Class* type_info_ref = nullptr;
        }
        inline app::ApplicationSettingsBase__Class** type_info = &type_info_ref;
        inline app::ApplicationSettingsBase__Class* get_class() {
            return il2cpp::get_class<app::ApplicationSettingsBase__Class>(type_info, "System.Configuration", "ApplicationSettingsBase");
        }
        inline app::ApplicationSettingsBase* create() {
            return il2cpp::create_object<app::ApplicationSettingsBase>(get_class());
        }
    } // namespace ApplicationSettingsBase
} // namespace app::classes::types
