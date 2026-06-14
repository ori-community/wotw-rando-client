#pragma once
#include <Modloader/app/structs/TelemetryComunicator_c.h>
#include <Modloader/app/structs/TelemetryComunicator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryComunicator_c {
        inline app::TelemetryComunicator_c__Class** type_info() {
            static app::TelemetryComunicator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TelemetryComunicator_c__Class**)(modloader::win::memory::resolve_rva(0x04739B28));
            }
            return cache;
        }
        inline app::TelemetryComunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TelemetryComunicator_c__Class>(type_info(), "Moon.Telemetry", "TelemetryComunicator", "<>c");
        }
        inline app::TelemetryComunicator_c* create() {
            return il2cpp::create_object<app::TelemetryComunicator_c>(get_class());
        }
    } // namespace TelemetryComunicator_c
} // namespace app::classes::types
