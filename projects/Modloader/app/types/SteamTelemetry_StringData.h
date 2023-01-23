#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamTelemetry_StringData__Class.h>
#include <Modloader/app/structs/SteamTelemetry_StringData.h>

namespace app::classes::types {
    namespace SteamTelemetry_StringData {
        inline app::SteamTelemetry_StringData__Class** type_info = (app::SteamTelemetry_StringData__Class**)(modloader::win::memory::resolve_rva(0x04720658));
        inline app::SteamTelemetry_StringData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_StringData__Class>(type_info, "", "SteamTelemetry", "StringData");
        }
        inline app::SteamTelemetry_StringData* create() {
            return il2cpp::create_object<app::SteamTelemetry_StringData>(get_class());
        }
    } // namespace SteamTelemetry_StringData
} // namespace app::classes::types
