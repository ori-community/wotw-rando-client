#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AllSpawningProfilingSetting__Class.h>
#include <Modloader/app/structs/AllSpawningProfilingSetting.h>

namespace app::classes::types {
    namespace AllSpawningProfilingSetting {
        namespace {
            inline app::AllSpawningProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::AllSpawningProfilingSetting__Class** type_info = &type_info_ref;
        inline app::AllSpawningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::AllSpawningProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "AllSpawningProfilingSetting");
        }
        inline app::AllSpawningProfilingSetting* create() {
            return il2cpp::create_object<app::AllSpawningProfilingSetting>(get_class());
        }
    } // namespace AllSpawningProfilingSetting
} // namespace app::classes::types
