#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryComunicator_c {
        inline app::TelemetryComunicator_c__Class** type_info = (app::TelemetryComunicator_c__Class**)(modloader::win::memory::resolve_rva(0x04739B28));
        inline app::TelemetryComunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TelemetryComunicator_c__Class>(type_info, "Moon.Telemetry", "TelemetryComunicator", "<>c");
        }
        inline app::TelemetryComunicator_c* create() {
            return il2cpp::create_object<app::TelemetryComunicator_c>(get_class());
        }
    } // namespace TelemetryComunicator_c
} // namespace app::classes::types
