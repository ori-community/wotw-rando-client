#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetry_c {
        inline app::MoonTelemetry_c__Class** type_info = (app::MoonTelemetry_c__Class**)(modloader::win::memory::resolve_rva(0x0473E508));
        inline app::MoonTelemetry_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_c__Class>(type_info, "", "MoonTelemetry", "<>c");
        }
        inline app::MoonTelemetry_c* create() {
            return il2cpp::create_object<app::MoonTelemetry_c>(get_class());
        }
    } // namespace MoonTelemetry_c
} // namespace app::classes::types
