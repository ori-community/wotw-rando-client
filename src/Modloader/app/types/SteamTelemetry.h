#pragma once
#include <Modloader/app/structs/SteamTelemetry.h>
#include <Modloader/app/structs/SteamTelemetry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamTelemetry {
        inline app::SteamTelemetry__Class** type_info() {
            static app::SteamTelemetry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0471E288));
            }
            return cache;
        }
        inline app::SteamTelemetry__Class* get_class() {
            return il2cpp::get_class<app::SteamTelemetry__Class>(type_info(), "", "SteamTelemetry");
        }
        inline app::SteamTelemetry* create() {
            return il2cpp::create_object<app::SteamTelemetry>(get_class());
        }
    } // namespace SteamTelemetry
} // namespace app::classes::types
