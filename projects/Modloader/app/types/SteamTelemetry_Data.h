#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamTelemetry_Data__Class.h>
#include <Modloader/app/structs/SteamTelemetry_Data.h>

namespace app::classes::types {
    namespace SteamTelemetry_Data {
        inline app::SteamTelemetry_Data__Class** type_info = (app::SteamTelemetry_Data__Class**)(modloader::win::memory::resolve_rva(0x0471B240));
        inline app::SteamTelemetry_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_Data__Class>(type_info, "", "SteamTelemetry", "Data");
        }
        inline app::SteamTelemetry_Data* create() {
            return il2cpp::create_object<app::SteamTelemetry_Data>(get_class());
        }
    } // namespace SteamTelemetry_Data
} // namespace app::classes::types
