#pragma once
#include <Modloader/app/structs/RefractionProfilingSetting.h>
#include <Modloader/app/structs/RefractionProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefractionProfilingSetting {
        inline app::RefractionProfilingSetting__Class** type_info() {
            static app::RefractionProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RefractionProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RefractionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::RefractionProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "RefractionProfilingSetting");
        }
        inline app::RefractionProfilingSetting* create() {
            return il2cpp::create_object<app::RefractionProfilingSetting>(get_class());
        }
    } // namespace RefractionProfilingSetting
} // namespace app::classes::types
