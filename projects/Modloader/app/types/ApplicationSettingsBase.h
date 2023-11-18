#pragma once
#include <Modloader/app/structs/ApplicationSettingsBase.h>
#include <Modloader/app/structs/ApplicationSettingsBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationSettingsBase {
        inline app::ApplicationSettingsBase__Class** type_info() {
            static app::ApplicationSettingsBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationSettingsBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationSettingsBase__Class* get_class() {
            return il2cpp::get_class<app::ApplicationSettingsBase__Class>(type_info(), "System.Configuration", "ApplicationSettingsBase");
        }
        inline app::ApplicationSettingsBase* create() {
            return il2cpp::create_object<app::ApplicationSettingsBase>(get_class());
        }
    } // namespace ApplicationSettingsBase
} // namespace app::classes::types
