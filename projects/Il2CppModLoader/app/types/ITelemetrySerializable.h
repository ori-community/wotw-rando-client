#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITelemetrySerializable {
        inline app::ITelemetrySerializable__Class** type_info = (app::ITelemetrySerializable__Class**)(modloader::win::memory::resolve_rva(0x04743FC8));
        inline app::ITelemetrySerializable__Class* get_class() {
            return il2cpp::get_class<app::ITelemetrySerializable__Class>(type_info, "", "ITelemetrySerializable");
        }
    } // namespace ITelemetrySerializable
} // namespace app::classes::types
