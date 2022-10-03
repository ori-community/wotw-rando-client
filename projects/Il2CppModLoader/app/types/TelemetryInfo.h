#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryInfo__Class** type_info;
        inline app::TelemetryInfo__Class* get_class() {
            return il2cpp::get_class<app::TelemetryInfo__Class>(type_info, "Microsoft.Xbox.Services.Xal", "TelemetryInfo");
        }
        inline app::TelemetryInfo* create() {
            return il2cpp::create_object<app::TelemetryInfo>(get_class());
        }
    } // namespace TelemetryInfo
} // namespace app::classes::types
