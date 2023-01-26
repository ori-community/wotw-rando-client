#pragma once
#include <Modloader/app/structs/MoonTelemetrySendCallback.h>
#include <Modloader/app/structs/MoonTelemetrySendCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySendCallback {
        inline app::MoonTelemetrySendCallback__Class** type_info() {
            static app::MoonTelemetrySendCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetrySendCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetrySendCallback__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendCallback__Class>(type_info(), "Moon.Telemetry.Web", "MoonTelemetrySendCallback");
        }
        inline app::MoonTelemetrySendCallback* create() {
            return il2cpp::create_object<app::MoonTelemetrySendCallback>(get_class());
        }
    } // namespace MoonTelemetrySendCallback
} // namespace app::classes::types
