#pragma once
#include <Modloader/app/structs/TelemetryInfo.h>
#include <Modloader/app/structs/TelemetryInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryInfo {
        inline app::TelemetryInfo__Class** type_info() {
            static app::TelemetryInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TelemetryInfo__Class**)(modloader::win::memory::resolve_rva(0x04783FA0));
            }
            return cache;
        }
        inline app::TelemetryInfo__Class* get_class() {
            return il2cpp::get_class<app::TelemetryInfo__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "TelemetryInfo");
        }
        inline app::TelemetryInfo* create() {
            return il2cpp::create_object<app::TelemetryInfo>(get_class());
        }
    } // namespace TelemetryInfo
} // namespace app::classes::types
