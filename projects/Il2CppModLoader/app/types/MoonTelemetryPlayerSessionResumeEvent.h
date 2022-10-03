#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionResumeEvent {
        namespace {
            app::MoonTelemetryPlayerSessionResumeEvent__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetryPlayerSessionResumeEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSessionResumeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionResumeEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionResumeEvent");
        }
        inline app::MoonTelemetryPlayerSessionResumeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionResumeEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionResumeEvent
} // namespace app::classes::types
