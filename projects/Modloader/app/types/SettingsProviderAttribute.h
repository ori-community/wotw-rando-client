#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsProviderAttribute {
        namespace {
            inline app::SettingsProviderAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingsProviderAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsProviderAttribute__Class>(type_info, "System.Configuration", "SettingsProviderAttribute");
        }
        inline app::SettingsProviderAttribute* create() {
            return il2cpp::create_object<app::SettingsProviderAttribute>(get_class());
        }
    } // namespace SettingsProviderAttribute
} // namespace app::classes::types
