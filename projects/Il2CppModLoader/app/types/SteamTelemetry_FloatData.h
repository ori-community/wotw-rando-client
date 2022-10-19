#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamTelemetry_FloatData {
        namespace {
            inline app::SteamTelemetry_FloatData__Class* type_info_ref = nullptr;
        }
        inline app::SteamTelemetry_FloatData__Class** type_info = &type_info_ref;
        inline app::SteamTelemetry_FloatData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_FloatData__Class>(type_info, "", "SteamTelemetry", "FloatData");
        }
        inline app::SteamTelemetry_FloatData* create() {
            return il2cpp::create_object<app::SteamTelemetry_FloatData>(get_class());
        }
    } // namespace SteamTelemetry_FloatData
} // namespace app::classes::types
