#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryComunicator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryComunicator_c__Class** type_info;
        inline app::TelemetryComunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TelemetryComunicator_c__Class>(type_info, "Moon.Telemetry", "TelemetryComunicator", "<>c");
        }
        inline app::TelemetryComunicator_c* create() {
            return il2cpp::create_object<app::TelemetryComunicator_c>(get_class());
        }
    } // namespace TelemetryComunicator_c
} // namespace app::classes::types
