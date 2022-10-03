#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineStartEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShrineStartEvent__Class** type_info;
        inline app::MoonTelemetryShrineStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShrineStartEvent__Class>(type_info, "", "MoonTelemetryShrineStartEvent");
        }
        inline app::MoonTelemetryShrineStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineStartEvent>(get_class());
        }
    } // namespace MoonTelemetryShrineStartEvent
} // namespace app::classes::types
