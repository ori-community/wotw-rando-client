#pragma once
#include <Modloader/app/structs/MoonTelemetry.h>
#include <Modloader/app/structs/MoonTelemetry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry {
        inline app::MoonTelemetry__Class** type_info() {
            static app::MoonTelemetry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetry__Class**)(modloader::win::memory::resolve_rva(0x0473F6A8));
            }
            return cache;
        }
        inline app::MoonTelemetry__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetry__Class>(type_info(), "", "MoonTelemetry");
        }
        inline app::MoonTelemetry* create() {
            return il2cpp::create_object<app::MoonTelemetry>(get_class());
        }
    } // namespace MoonTelemetry
} // namespace app::classes::types
