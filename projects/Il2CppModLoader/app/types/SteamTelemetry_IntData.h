#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry_IntData {
        namespace {
            app::SteamTelemetry_IntData__Class* type_info_ref = nullptr;
        }
        app::SteamTelemetry_IntData__Class** type_info = &type_info_ref;
        inline app::SteamTelemetry_IntData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_IntData__Class>(type_info, "", "SteamTelemetry", "IntData");
        }
        inline app::SteamTelemetry_IntData* create() {
            return il2cpp::create_object<app::SteamTelemetry_IntData>(get_class());
        }
    } // namespace SteamTelemetry_IntData
} // namespace app::classes::types
