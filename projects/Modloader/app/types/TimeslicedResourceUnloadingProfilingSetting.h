#pragma once
#include <Modloader/app/structs/TimeslicedResourceUnloadingProfilingSetting.h>
#include <Modloader/app/structs/TimeslicedResourceUnloadingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeslicedResourceUnloadingProfilingSetting {
        inline app::TimeslicedResourceUnloadingProfilingSetting__Class** type_info() {
            static app::TimeslicedResourceUnloadingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeslicedResourceUnloadingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeslicedResourceUnloadingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TimeslicedResourceUnloadingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TimeslicedResourceUnloadingProfilingSetting");
        }
        inline app::TimeslicedResourceUnloadingProfilingSetting* create() {
            return il2cpp::create_object<app::TimeslicedResourceUnloadingProfilingSetting>(get_class());
        }
    } // namespace TimeslicedResourceUnloadingProfilingSetting
} // namespace app::classes::types
