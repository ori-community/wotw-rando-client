#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryInfo {
        inline app::TelemetryInfo__Class** type_info = (app::TelemetryInfo__Class**)(modloader::win::memory::resolve_rva(0x04783FA0));
        inline app::TelemetryInfo__Class* get_class() {
            return il2cpp::get_class<app::TelemetryInfo__Class>(type_info, "Microsoft.Xbox.Services.Xal", "TelemetryInfo");
        }
        inline app::TelemetryInfo* create() {
            return il2cpp::create_object<app::TelemetryInfo>(get_class());
        }
    } // namespace TelemetryInfo
} // namespace app::classes::types
