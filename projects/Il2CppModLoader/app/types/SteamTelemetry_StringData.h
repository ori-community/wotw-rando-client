#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry_StringData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamTelemetry_StringData__Class** type_info;
        inline app::SteamTelemetry_StringData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_StringData__Class>(type_info, "", "SteamTelemetry", "StringData");
        }
        inline app::SteamTelemetry_StringData* create() {
            return il2cpp::create_object<app::SteamTelemetry_StringData>(get_class());
        }
    } // namespace SteamTelemetry_StringData
} // namespace app::classes::types
