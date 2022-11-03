#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FreezeShaderTimeProfilingSetting {
        namespace {
            inline app::FreezeShaderTimeProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::FreezeShaderTimeProfilingSetting__Class** type_info = &type_info_ref;
        inline app::FreezeShaderTimeProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::FreezeShaderTimeProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "FreezeShaderTimeProfilingSetting");
        }
        inline app::FreezeShaderTimeProfilingSetting* create() {
            return il2cpp::create_object<app::FreezeShaderTimeProfilingSetting>(get_class());
        }
    } // namespace FreezeShaderTimeProfilingSetting
} // namespace app::classes::types
