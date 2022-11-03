#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineEndEvent {
        inline app::MoonTelemetryShrineEndEvent__Class** type_info = (app::MoonTelemetryShrineEndEvent__Class**)(modloader::win::memory::resolve_rva(0x04793308));
        inline app::MoonTelemetryShrineEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShrineEndEvent__Class>(type_info, "", "MoonTelemetryShrineEndEvent");
        }
        inline app::MoonTelemetryShrineEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineEndEvent>(get_class());
        }
    } // namespace MoonTelemetryShrineEndEvent
} // namespace app::classes::types
