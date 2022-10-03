#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIntegrationSettings {
        namespace {
            app::MoonIntegrationSettings__Class* type_info_ref = nullptr;
        }
        app::MoonIntegrationSettings__Class** type_info = &type_info_ref;
        inline app::MoonIntegrationSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonIntegrationSettings__Class>(type_info, "", "MoonIntegrationSettings");
        }
        inline app::MoonIntegrationSettings* create() {
            return il2cpp::create_object<app::MoonIntegrationSettings>(get_class());
        }
    } // namespace MoonIntegrationSettings
} // namespace app::classes::types
