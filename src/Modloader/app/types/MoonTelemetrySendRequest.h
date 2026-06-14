#pragma once
#include <Modloader/app/structs/MoonTelemetrySendRequest.h>
#include <Modloader/app/structs/MoonTelemetrySendRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySendRequest {
        inline app::MoonTelemetrySendRequest__Class** type_info() {
            static app::MoonTelemetrySendRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetrySendRequest__Class**)(modloader::win::memory::resolve_rva(0x047065E8));
            }
            return cache;
        }
        inline app::MoonTelemetrySendRequest__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendRequest__Class>(type_info(), "Moon.Telemetry.Web", "MoonTelemetrySendRequest");
        }
        inline app::MoonTelemetrySendRequest* create() {
            return il2cpp::create_object<app::MoonTelemetrySendRequest>(get_class());
        }
    } // namespace MoonTelemetrySendRequest
} // namespace app::classes::types
