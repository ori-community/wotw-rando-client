#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourcesUnloadingProfilingSetting {
        namespace {
            app::ResourcesUnloadingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ResourcesUnloadingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ResourcesUnloadingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ResourcesUnloadingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ResourcesUnloadingProfilingSetting");
        }
        inline app::ResourcesUnloadingProfilingSetting* create() {
            return il2cpp::create_object<app::ResourcesUnloadingProfilingSetting>(get_class());
        }
    } // namespace ResourcesUnloadingProfilingSetting
} // namespace app::classes::types
