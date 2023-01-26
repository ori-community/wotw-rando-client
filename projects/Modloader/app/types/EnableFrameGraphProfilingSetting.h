#pragma once
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting.h>
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableFrameGraphProfilingSetting {
        inline app::EnableFrameGraphProfilingSetting__Class** type_info() {
            static app::EnableFrameGraphProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableFrameGraphProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableFrameGraphProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnableFrameGraphProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EnableFrameGraphProfilingSetting");
        }
        inline app::EnableFrameGraphProfilingSetting* create() {
            return il2cpp::create_object<app::EnableFrameGraphProfilingSetting>(get_class());
        }
    } // namespace EnableFrameGraphProfilingSetting
} // namespace app::classes::types
