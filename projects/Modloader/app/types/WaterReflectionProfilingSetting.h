#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterReflectionProfilingSetting__Class.h>
#include <Modloader/app/structs/WaterReflectionProfilingSetting.h>

namespace app::classes::types {
    namespace WaterReflectionProfilingSetting {
        namespace {
            inline app::WaterReflectionProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::WaterReflectionProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WaterReflectionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WaterReflectionProfilingSetting");
        }
        inline app::WaterReflectionProfilingSetting* create() {
            return il2cpp::create_object<app::WaterReflectionProfilingSetting>(get_class());
        }
    } // namespace WaterReflectionProfilingSetting
} // namespace app::classes::types
