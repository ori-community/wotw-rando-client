#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetry_c__Class** type_info;
        inline app::MoonTelemetry_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_c__Class>(type_info, "", "MoonTelemetry", "<>c");
        }
        inline app::MoonTelemetry_c* create() {
            return il2cpp::create_object<app::MoonTelemetry_c>(get_class());
        }
    } // namespace MoonTelemetry_c
} // namespace app::classes::types
