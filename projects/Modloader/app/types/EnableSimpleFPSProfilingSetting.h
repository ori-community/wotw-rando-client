#pragma once
#include <Modloader/app/structs/EnableSimpleFPSProfilingSetting.h>
#include <Modloader/app/structs/EnableSimpleFPSProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableSimpleFPSProfilingSetting {
        inline app::EnableSimpleFPSProfilingSetting__Class** type_info() {
            static app::EnableSimpleFPSProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableSimpleFPSProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableSimpleFPSProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnableSimpleFPSProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EnableSimpleFPSProfilingSetting");
        }
        inline app::EnableSimpleFPSProfilingSetting* create() {
            return il2cpp::create_object<app::EnableSimpleFPSProfilingSetting>(get_class());
        }
    } // namespace EnableSimpleFPSProfilingSetting
} // namespace app::classes::types
