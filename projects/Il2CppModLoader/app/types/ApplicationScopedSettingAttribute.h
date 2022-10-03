#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplicationScopedSettingAttribute {
        namespace {
            app::ApplicationScopedSettingAttribute__Class* type_info_ref = nullptr;
        }
        app::ApplicationScopedSettingAttribute__Class** type_info = &type_info_ref;
        inline app::ApplicationScopedSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::ApplicationScopedSettingAttribute__Class>(type_info, "System.Configuration", "ApplicationScopedSettingAttribute");
        }
        inline app::ApplicationScopedSettingAttribute* create() {
            return il2cpp::create_object<app::ApplicationScopedSettingAttribute>(get_class());
        }
    } // namespace ApplicationScopedSettingAttribute
} // namespace app::classes::types
