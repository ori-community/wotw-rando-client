#pragma once
#include <Modloader/app/structs/ITelemetrySerializable.h>
#include <Modloader/app/structs/ITelemetrySerializable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITelemetrySerializable {
        inline app::ITelemetrySerializable__Class** type_info() {
            static app::ITelemetrySerializable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITelemetrySerializable__Class**)(modloader::win::memory::resolve_rva(0x04743FC8));
            }
            return cache;
        }
        inline app::ITelemetrySerializable__Class* get_class() {
            return il2cpp::get_class<app::ITelemetrySerializable__Class>(type_info(), "", "ITelemetrySerializable");
        }
    } // namespace ITelemetrySerializable
} // namespace app::classes::types
