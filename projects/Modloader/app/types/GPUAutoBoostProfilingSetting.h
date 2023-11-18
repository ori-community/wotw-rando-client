#pragma once
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting.h>
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GPUAutoBoostProfilingSetting {
        inline app::GPUAutoBoostProfilingSetting__Class** type_info() {
            static app::GPUAutoBoostProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GPUAutoBoostProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GPUAutoBoostProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoBoostProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "GPUAutoBoostProfilingSetting");
        }
        inline app::GPUAutoBoostProfilingSetting* create() {
            return il2cpp::create_object<app::GPUAutoBoostProfilingSetting>(get_class());
        }
    } // namespace GPUAutoBoostProfilingSetting
} // namespace app::classes::types
