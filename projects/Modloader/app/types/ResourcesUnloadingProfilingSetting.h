#pragma once
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting.h>
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourcesUnloadingProfilingSetting {
        inline app::ResourcesUnloadingProfilingSetting__Class** type_info() {
            static app::ResourcesUnloadingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourcesUnloadingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourcesUnloadingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ResourcesUnloadingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ResourcesUnloadingProfilingSetting");
        }
        inline app::ResourcesUnloadingProfilingSetting* create() {
            return il2cpp::create_object<app::ResourcesUnloadingProfilingSetting>(get_class());
        }
    } // namespace ResourcesUnloadingProfilingSetting
} // namespace app::classes::types
