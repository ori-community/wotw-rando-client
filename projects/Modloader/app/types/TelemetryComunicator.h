#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryComunicator {
        inline app::TelemetryComunicator__Class** type_info = (app::TelemetryComunicator__Class**)(modloader::win::memory::resolve_rva(0x04732858));
        inline app::TelemetryComunicator__Class* get_class() {
            return il2cpp::get_class<app::TelemetryComunicator__Class>(type_info, "Moon.Telemetry", "TelemetryComunicator");
        }
        inline app::TelemetryComunicator* create() {
            return il2cpp::create_object<app::TelemetryComunicator>(get_class());
        }
    } // namespace TelemetryComunicator
} // namespace app::classes::types
