#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySendCallback {
        namespace {
            app::MoonTelemetrySendCallback__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetrySendCallback__Class** type_info = &type_info_ref;
        inline app::MoonTelemetrySendCallback__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendCallback__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetrySendCallback");
        }
        inline app::MoonTelemetrySendCallback* create() {
            return il2cpp::create_object<app::MoonTelemetrySendCallback>(get_class());
        }
    } // namespace MoonTelemetrySendCallback
} // namespace app::classes::types
