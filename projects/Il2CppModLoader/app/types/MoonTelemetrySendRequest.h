#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySendRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetrySendRequest__Class** type_info;
        inline app::MoonTelemetrySendRequest__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendRequest__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetrySendRequest");
        }
        inline app::MoonTelemetrySendRequest* create() {
            return il2cpp::create_object<app::MoonTelemetrySendRequest>(get_class());
        }
    } // namespace MoonTelemetrySendRequest
} // namespace app::classes::types
