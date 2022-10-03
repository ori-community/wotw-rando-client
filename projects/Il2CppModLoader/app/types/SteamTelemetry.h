#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamTelemetry__Class** type_info;
        inline app::SteamTelemetry__Class* get_class() {
            return il2cpp::get_class<app::SteamTelemetry__Class>(type_info, "", "SteamTelemetry");
        }
        inline app::SteamTelemetry* create() {
            return il2cpp::create_object<app::SteamTelemetry>(get_class());
        }
    } // namespace SteamTelemetry
} // namespace app::classes::types
