#pragma once
#include <Modloader/app/structs/ReduceSceneUnloadUtilityProfilingSetting.h>
#include <Modloader/app/structs/ReduceSceneUnloadUtilityProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReduceSceneUnloadUtilityProfilingSetting {
        inline app::ReduceSceneUnloadUtilityProfilingSetting__Class** type_info() {
            static app::ReduceSceneUnloadUtilityProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReduceSceneUnloadUtilityProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReduceSceneUnloadUtilityProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ReduceSceneUnloadUtilityProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ReduceSceneUnloadUtilityProfilingSetting");
        }
        inline app::ReduceSceneUnloadUtilityProfilingSetting* create() {
            return il2cpp::create_object<app::ReduceSceneUnloadUtilityProfilingSetting>(get_class());
        }
    } // namespace ReduceSceneUnloadUtilityProfilingSetting
} // namespace app::classes::types
