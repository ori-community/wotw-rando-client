#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReduceSceneUnloadUtilityProfilingSetting__Class.h>
#include <Modloader/app/structs/ReduceSceneUnloadUtilityProfilingSetting.h>

namespace app::classes::types {
    namespace ReduceSceneUnloadUtilityProfilingSetting {
        namespace {
            inline app::ReduceSceneUnloadUtilityProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ReduceSceneUnloadUtilityProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ReduceSceneUnloadUtilityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ReduceSceneUnloadUtilityProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ReduceSceneUnloadUtilityProfilingSetting");
        }
        inline app::ReduceSceneUnloadUtilityProfilingSetting* create() {
            return il2cpp::create_object<app::ReduceSceneUnloadUtilityProfilingSetting>(get_class());
        }
    } // namespace ReduceSceneUnloadUtilityProfilingSetting
} // namespace app::classes::types
