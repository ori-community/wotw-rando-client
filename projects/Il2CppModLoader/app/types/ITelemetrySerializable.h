#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITelemetrySerializable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITelemetrySerializable__Class** type_info;
        inline app::ITelemetrySerializable__Class* get_class() {
            return il2cpp::get_class<app::ITelemetrySerializable__Class>(type_info, "", "ITelemetrySerializable");
        }
    } // namespace ITelemetrySerializable
} // namespace app::classes::types
