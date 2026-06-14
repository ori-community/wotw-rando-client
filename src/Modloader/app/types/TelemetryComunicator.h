#pragma once
#include <Modloader/app/structs/TelemetryComunicator.h>
#include <Modloader/app/structs/TelemetryComunicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryComunicator {
        inline app::TelemetryComunicator__Class** type_info() {
            static app::TelemetryComunicator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TelemetryComunicator__Class**)(modloader::win::memory::resolve_rva(0x04732858));
            }
            return cache;
        }
        inline app::TelemetryComunicator__Class* get_class() {
            return il2cpp::get_class<app::TelemetryComunicator__Class>(type_info(), "Moon.Telemetry", "TelemetryComunicator");
        }
        inline app::TelemetryComunicator* create() {
            return il2cpp::create_object<app::TelemetryComunicator>(get_class());
        }
    } // namespace TelemetryComunicator
} // namespace app::classes::types
