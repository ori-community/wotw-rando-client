#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetrySendCallback__Class.h>
#include <Modloader/app/structs/MoonTelemetrySendCallback.h>

namespace app::classes::types {
    namespace MoonTelemetrySendCallback {
        namespace {
            inline app::MoonTelemetrySendCallback__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetrySendCallback__Class** type_info = &type_info_ref;
        inline app::MoonTelemetrySendCallback__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySendCallback__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetrySendCallback");
        }
        inline app::MoonTelemetrySendCallback* create() {
            return il2cpp::create_object<app::MoonTelemetrySendCallback>(get_class());
        }
    } // namespace MoonTelemetrySendCallback
} // namespace app::classes::types
