#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourcesUnloadingV2ProfilingSetting {
        namespace {
            inline app::ResourcesUnloadingV2ProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ResourcesUnloadingV2ProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ResourcesUnloadingV2ProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ResourcesUnloadingV2ProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ResourcesUnloadingV2ProfilingSetting");
        }
        inline app::ResourcesUnloadingV2ProfilingSetting* create() {
            return il2cpp::create_object<app::ResourcesUnloadingV2ProfilingSetting>(get_class());
        }
    } // namespace ResourcesUnloadingV2ProfilingSetting
} // namespace app::classes::types
