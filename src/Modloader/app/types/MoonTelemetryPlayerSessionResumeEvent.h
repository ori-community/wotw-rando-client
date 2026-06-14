#pragma once
#include <Modloader/app/structs/MoonTelemetryPlayerSessionResumeEvent.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionResumeEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionResumeEvent {
        inline app::MoonTelemetryPlayerSessionResumeEvent__Class** type_info() {
            static app::MoonTelemetryPlayerSessionResumeEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryPlayerSessionResumeEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryPlayerSessionResumeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionResumeEvent__Class>(type_info(), "", "MoonTelemetryPlayerSessionResumeEvent");
        }
        inline app::MoonTelemetryPlayerSessionResumeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionResumeEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionResumeEvent
} // namespace app::classes::types
