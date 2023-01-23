#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITelemetryProvider__Class.h>

namespace app::classes::types {
    namespace ITelemetryProvider {
        inline app::ITelemetryProvider__Class** type_info = (app::ITelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x047982A0));
        inline app::ITelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::ITelemetryProvider__Class>(type_info, "SystemIntegration.Synchronizer", "ITelemetryProvider");
        }
    } // namespace ITelemetryProvider
} // namespace app::classes::types
