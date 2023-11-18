#pragma once
#include <Modloader/app/structs/MoonIntegrationSettings.h>
#include <Modloader/app/structs/MoonIntegrationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonIntegrationSettings {
        inline app::MoonIntegrationSettings__Class** type_info() {
            static app::MoonIntegrationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonIntegrationSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonIntegrationSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonIntegrationSettings__Class>(type_info(), "", "MoonIntegrationSettings");
        }
        inline app::MoonIntegrationSettings* create() {
            return il2cpp::create_object<app::MoonIntegrationSettings>(get_class());
        }
    } // namespace MoonIntegrationSettings
} // namespace app::classes::types
