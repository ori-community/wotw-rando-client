#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonIntegrationSettings__Class.h>
#include <Modloader/app/structs/MoonIntegrationSettings.h>

namespace app::classes::types {
    namespace MoonIntegrationSettings {
        namespace {
            inline app::MoonIntegrationSettings__Class* type_info_ref = nullptr;
        }
        inline app::MoonIntegrationSettings__Class** type_info = &type_info_ref;
        inline app::MoonIntegrationSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonIntegrationSettings__Class>(type_info, "", "MoonIntegrationSettings");
        }
        inline app::MoonIntegrationSettings* create() {
            return il2cpp::create_object<app::MoonIntegrationSettings>(get_class());
        }
    } // namespace MoonIntegrationSettings
} // namespace app::classes::types
