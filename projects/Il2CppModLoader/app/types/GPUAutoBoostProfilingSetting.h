#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUAutoBoostProfilingSetting {
        namespace {
            app::GPUAutoBoostProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::GPUAutoBoostProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GPUAutoBoostProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GPUAutoBoostProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GPUAutoBoostProfilingSetting");
        }
        inline app::GPUAutoBoostProfilingSetting* create() {
            return il2cpp::create_object<app::GPUAutoBoostProfilingSetting>(get_class());
        }
    } // namespace GPUAutoBoostProfilingSetting
} // namespace app::classes::types
