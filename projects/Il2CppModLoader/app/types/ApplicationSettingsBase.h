#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplicationSettingsBase {
        namespace {
            app::ApplicationSettingsBase__Class* type_info_ref = nullptr;
        }
        app::ApplicationSettingsBase__Class** type_info = &type_info_ref;
        inline app::ApplicationSettingsBase__Class* get_class() {
            return il2cpp::get_class<app::ApplicationSettingsBase__Class>(type_info, "System.Configuration", "ApplicationSettingsBase");
        }
        inline app::ApplicationSettingsBase* create() {
            return il2cpp::create_object<app::ApplicationSettingsBase>(get_class());
        }
    } // namespace ApplicationSettingsBase
} // namespace app::classes::types
