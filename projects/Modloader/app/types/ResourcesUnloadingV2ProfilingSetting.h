#pragma once
#include <Modloader/app/structs/ResourcesUnloadingV2ProfilingSetting.h>
#include <Modloader/app/structs/ResourcesUnloadingV2ProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourcesUnloadingV2ProfilingSetting {
        inline app::ResourcesUnloadingV2ProfilingSetting__Class** type_info() {
            static app::ResourcesUnloadingV2ProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourcesUnloadingV2ProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourcesUnloadingV2ProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ResourcesUnloadingV2ProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ResourcesUnloadingV2ProfilingSetting");
        }
        inline app::ResourcesUnloadingV2ProfilingSetting* create() {
            return il2cpp::create_object<app::ResourcesUnloadingV2ProfilingSetting>(get_class());
        }
    } // namespace ResourcesUnloadingV2ProfilingSetting
} // namespace app::classes::types
