#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryComunicator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryComunicator__Class** type_info;
        inline app::TelemetryComunicator__Class* get_class() {
            return il2cpp::get_class<app::TelemetryComunicator__Class>(type_info, "Moon.Telemetry", "TelemetryComunicator");
        }
        inline app::TelemetryComunicator* create() {
            return il2cpp::create_object<app::TelemetryComunicator>(get_class());
        }
    } // namespace TelemetryComunicator
} // namespace app::classes::types
