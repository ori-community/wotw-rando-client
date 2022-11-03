#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineStartEvent {
        inline app::MoonTelemetryShrineStartEvent__Class** type_info = (app::MoonTelemetryShrineStartEvent__Class**)(modloader::win::memory::resolve_rva(0x0473B990));
        inline app::MoonTelemetryShrineStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShrineStartEvent__Class>(type_info, "", "MoonTelemetryShrineStartEvent");
        }
        inline app::MoonTelemetryShrineStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineStartEvent>(get_class());
        }
    } // namespace MoonTelemetryShrineStartEvent
} // namespace app::classes::types
