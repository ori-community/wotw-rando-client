#pragma once
#include <Modloader/app/structs/WwiseEnabledProfilingSetting.h>
#include <Modloader/app/structs/WwiseEnabledProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseEnabledProfilingSetting {
        inline app::WwiseEnabledProfilingSetting__Class** type_info() {
            static app::WwiseEnabledProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WwiseEnabledProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WwiseEnabledProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WwiseEnabledProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "WwiseEnabledProfilingSetting");
        }
        inline app::WwiseEnabledProfilingSetting* create() {
            return il2cpp::create_object<app::WwiseEnabledProfilingSetting>(get_class());
        }
    } // namespace WwiseEnabledProfilingSetting
} // namespace app::classes::types
