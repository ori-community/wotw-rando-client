#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplicationScopedSettingAttribute {
        namespace {
            inline app::ApplicationScopedSettingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ApplicationScopedSettingAttribute__Class** type_info = &type_info_ref;
        inline app::ApplicationScopedSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::ApplicationScopedSettingAttribute__Class>(type_info, "System.Configuration", "ApplicationScopedSettingAttribute");
        }
        inline app::ApplicationScopedSettingAttribute* create() {
            return il2cpp::create_object<app::ApplicationScopedSettingAttribute>(get_class());
        }
    } // namespace ApplicationScopedSettingAttribute
} // namespace app::classes::types
