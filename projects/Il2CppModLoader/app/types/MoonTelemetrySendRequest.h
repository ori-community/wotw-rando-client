#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetrySendRequest {
        inline app::MoonTelemetrySendRequest__Class** type_info = (app::MoonTelemetrySendRequest__Class**)(modloader::win::memory::resolve_rva(0x047065E8));
        inline app::MoonTelemetrySendRequest__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendRequest__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetrySendRequest");
        }
        inline app::MoonTelemetrySendRequest* create() {
            return il2cpp::create_object<app::MoonTelemetrySendRequest>(get_class());
        }
    } // namespace MoonTelemetrySendRequest
} // namespace app::classes::types
