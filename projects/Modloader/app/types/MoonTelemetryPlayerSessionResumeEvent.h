#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionResumeEvent__Class.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionResumeEvent.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionResumeEvent {
        namespace {
            inline app::MoonTelemetryPlayerSessionResumeEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryPlayerSessionResumeEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSessionResumeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionResumeEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionResumeEvent");
        }
        inline app::MoonTelemetryPlayerSessionResumeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionResumeEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionResumeEvent
} // namespace app::classes::types
