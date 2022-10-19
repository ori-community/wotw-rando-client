#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetry_MaelstromEvent {
        inline app::MoonTelemetry_MaelstromEvent__Class** type_info = (app::MoonTelemetry_MaelstromEvent__Class**)(modloader::win::memory::resolve_rva(0x04756808));
        inline app::MoonTelemetry_MaelstromEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_MaelstromEvent__Class>(type_info, "", "MoonTelemetry", "MaelstromEvent");
        }
        inline app::MoonTelemetry_MaelstromEvent* create() {
            return il2cpp::create_object<app::MoonTelemetry_MaelstromEvent>(get_class());
        }
        inline app::MoonTelemetry_MaelstromEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetry_MaelstromEvent__Array>(get_class(), size);
        }
        inline app::MoonTelemetry_MaelstromEvent__Array* create_array(const std::vector<app::MoonTelemetry_MaelstromEvent*>& items) {
            return il2cpp::array_new<app::MoonTelemetry_MaelstromEvent__Array>(get_class(), items);
        }
    } // namespace MoonTelemetry_MaelstromEvent
} // namespace app::classes::types
