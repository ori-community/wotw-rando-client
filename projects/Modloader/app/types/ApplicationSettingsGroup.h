#pragma once
#include <Modloader/app/structs/ApplicationSettingsGroup.h>
#include <Modloader/app/structs/ApplicationSettingsGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationSettingsGroup {
        inline app::ApplicationSettingsGroup__Class** type_info() {
            static app::ApplicationSettingsGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationSettingsGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationSettingsGroup__Class* get_class() {
            return il2cpp::get_class<app::ApplicationSettingsGroup__Class>(type_info(), "System.Configuration", "ApplicationSettingsGroup");
        }
        inline app::ApplicationSettingsGroup* create() {
            return il2cpp::create_object<app::ApplicationSettingsGroup>(get_class());
        }
    } // namespace ApplicationSettingsGroup
} // namespace app::classes::types
