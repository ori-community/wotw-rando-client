#pragma once
#include <Modloader/app/structs/MoonTelemetry_c_DisplayClass48_0.h>
#include <Modloader/app/structs/MoonTelemetry_c_DisplayClass48_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_c_DisplayClass48_0 {
        inline app::MoonTelemetry_c_DisplayClass48_0__Class** type_info() {
            static app::MoonTelemetry_c_DisplayClass48_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetry_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x047361D0));
            }
            return cache;
        }
        inline app::MoonTelemetry_c_DisplayClass48_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_c_DisplayClass48_0__Class>(type_info(), "", "MoonTelemetry", "<>c__DisplayClass48_0");
        }
        inline app::MoonTelemetry_c_DisplayClass48_0* create() {
            return il2cpp::create_object<app::MoonTelemetry_c_DisplayClass48_0>(get_class());
        }
    } // namespace MoonTelemetry_c_DisplayClass48_0
} // namespace app::classes::types
