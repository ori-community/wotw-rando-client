#pragma once
#include <Modloader/app/structs/SteamTelemetry_FloatData.h>
#include <Modloader/app/structs/SteamTelemetry_FloatData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry_FloatData {
        inline app::SteamTelemetry_FloatData__Class** type_info() {
            static app::SteamTelemetry_FloatData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamTelemetry_FloatData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamTelemetry_FloatData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_FloatData__Class>(type_info(), "", "SteamTelemetry", "FloatData");
        }
        inline app::SteamTelemetry_FloatData* create() {
            return il2cpp::create_object<app::SteamTelemetry_FloatData>(get_class());
        }
    } // namespace SteamTelemetry_FloatData
} // namespace app::classes::types
