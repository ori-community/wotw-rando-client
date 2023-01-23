#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LowResolutionProfilingSetting__Class.h>
#include <Modloader/app/structs/LowResolutionProfilingSetting.h>

namespace app::classes::types {
    namespace LowResolutionProfilingSetting {
        namespace {
            inline app::LowResolutionProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::LowResolutionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::LowResolutionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::LowResolutionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "LowResolutionProfilingSetting");
        }
        inline app::LowResolutionProfilingSetting* create() {
            return il2cpp::create_object<app::LowResolutionProfilingSetting>(get_class());
        }
    } // namespace LowResolutionProfilingSetting
} // namespace app::classes::types
