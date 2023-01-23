#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GodRaysProfilingSetting__Class.h>
#include <Modloader/app/structs/GodRaysProfilingSetting.h>

namespace app::classes::types {
    namespace GodRaysProfilingSetting {
        namespace {
            inline app::GodRaysProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::GodRaysProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GodRaysProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GodRaysProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GodRaysProfilingSetting");
        }
        inline app::GodRaysProfilingSetting* create() {
            return il2cpp::create_object<app::GodRaysProfilingSetting>(get_class());
        }
    } // namespace GodRaysProfilingSetting
} // namespace app::classes::types
