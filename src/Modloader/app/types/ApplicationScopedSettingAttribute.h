#pragma once
#include <Modloader/app/structs/ApplicationScopedSettingAttribute.h>
#include <Modloader/app/structs/ApplicationScopedSettingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationScopedSettingAttribute {
        inline app::ApplicationScopedSettingAttribute__Class** type_info() {
            static app::ApplicationScopedSettingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationScopedSettingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationScopedSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::ApplicationScopedSettingAttribute__Class>(type_info(), "System.Configuration", "ApplicationScopedSettingAttribute");
        }
        inline app::ApplicationScopedSettingAttribute* create() {
            return il2cpp::create_object<app::ApplicationScopedSettingAttribute>(get_class());
        }
    } // namespace ApplicationScopedSettingAttribute
} // namespace app::classes::types
