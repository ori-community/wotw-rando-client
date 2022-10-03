#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineEndEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShrineEndEvent__Class** type_info;
        inline app::MoonTelemetryShrineEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryShrineEndEvent__Class>(type_info, "", "MoonTelemetryShrineEndEvent");
        }
        inline app::MoonTelemetryShrineEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineEndEvent>(get_class());
        }
    } // namespace MoonTelemetryShrineEndEvent
} // namespace app::classes::types
