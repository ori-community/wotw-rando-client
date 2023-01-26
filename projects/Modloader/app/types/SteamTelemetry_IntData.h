#pragma once
#include <Modloader/app/structs/SteamTelemetry_IntData.h>
#include <Modloader/app/structs/SteamTelemetry_IntData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry_IntData {
        inline app::SteamTelemetry_IntData__Class** type_info() {
            static app::SteamTelemetry_IntData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamTelemetry_IntData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamTelemetry_IntData__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamTelemetry_IntData__Class>(type_info(), "", "SteamTelemetry", "IntData");
        }
        inline app::SteamTelemetry_IntData* create() {
            return il2cpp::create_object<app::SteamTelemetry_IntData>(get_class());
        }
    } // namespace SteamTelemetry_IntData
} // namespace app::classes::types
