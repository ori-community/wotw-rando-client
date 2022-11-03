#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamTelemetry {
        inline app::SteamTelemetry__Class** type_info = (app::SteamTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0471E288));
        inline app::SteamTelemetry__Class* get_class() {
            return il2cpp::get_class<app::SteamTelemetry__Class>(type_info, "", "SteamTelemetry");
        }
        inline app::SteamTelemetry* create() {
            return il2cpp::create_object<app::SteamTelemetry>(get_class());
        }
    } // namespace SteamTelemetry
} // namespace app::classes::types
