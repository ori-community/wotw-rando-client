#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsBase__Class.h>
#include <Modloader/app/structs/SettingsBase.h>

namespace app::classes::types {
    namespace SettingsBase {
        namespace {
            inline app::SettingsBase__Class* type_info_ref = nullptr;
        }
        inline app::SettingsBase__Class** type_info = &type_info_ref;
        inline app::SettingsBase__Class* get_class() {
            return il2cpp::get_class<app::SettingsBase__Class>(type_info, "System.Configuration", "SettingsBase");
        }
        inline app::SettingsBase* create() {
            return il2cpp::create_object<app::SettingsBase>(get_class());
        }
    } // namespace SettingsBase
} // namespace app::classes::types
