#pragma once
#include <Modloader/app/structs/FreezeShaderTimeProfilingSetting.h>
#include <Modloader/app/structs/FreezeShaderTimeProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FreezeShaderTimeProfilingSetting {
        inline app::FreezeShaderTimeProfilingSetting__Class** type_info() {
            static app::FreezeShaderTimeProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FreezeShaderTimeProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FreezeShaderTimeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FreezeShaderTimeProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "FreezeShaderTimeProfilingSetting");
        }
        inline app::FreezeShaderTimeProfilingSetting* create() {
            return il2cpp::create_object<app::FreezeShaderTimeProfilingSetting>(get_class());
        }
    } // namespace FreezeShaderTimeProfilingSetting
} // namespace app::classes::types
