#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthPrecullProfilingSetting {
        namespace {
            app::DepthPrecullProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DepthPrecullProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DepthPrecullProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DepthPrecullProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DepthPrecullProfilingSetting");
        }
        inline app::DepthPrecullProfilingSetting* create() {
            return il2cpp::create_object<app::DepthPrecullProfilingSetting>(get_class());
        }
    } // namespace DepthPrecullProfilingSetting
} // namespace app::classes::types
