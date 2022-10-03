#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamTelemetry_Data__Class** type_info;
        inline app::SteamTelemetry_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_Data__Class>(type_info, "", "SteamTelemetry", "Data");
        }
        inline app::SteamTelemetry_Data* create() {
            return il2cpp::create_object<app::SteamTelemetry_Data>(get_class());
        }
    } // namespace SteamTelemetry_Data
} // namespace app::classes::types
