#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetry {
        inline app::MoonTelemetry__Class** type_info = (app::MoonTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0473F6A8));
        inline app::MoonTelemetry__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetry__Class>(type_info, "", "MoonTelemetry");
        }
        inline app::MoonTelemetry* create() {
            return il2cpp::create_object<app::MoonTelemetry>(get_class());
        }
    } // namespace MoonTelemetry
} // namespace app::classes::types
