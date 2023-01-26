#pragma once
#include <Modloader/app/structs/ObjectPassProfilingSetting.h>
#include <Modloader/app/structs/ObjectPassProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectPassProfilingSetting {
        inline app::ObjectPassProfilingSetting__Class** type_info() {
            static app::ObjectPassProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectPassProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectPassProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ObjectPassProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ObjectPassProfilingSetting");
        }
        inline app::ObjectPassProfilingSetting* create() {
            return il2cpp::create_object<app::ObjectPassProfilingSetting>(get_class());
        }
    } // namespace ObjectPassProfilingSetting
} // namespace app::classes::types
