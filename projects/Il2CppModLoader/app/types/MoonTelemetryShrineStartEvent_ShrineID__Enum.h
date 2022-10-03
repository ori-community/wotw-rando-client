#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineStartEvent_ShrineID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class** type_info;
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryShrineStartEvent_ShrineID__Enum__Class>(type_info, "", "MoonTelemetryShrineStartEvent", "ShrineID");
        }
        inline app::MoonTelemetryShrineStartEvent_ShrineID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineStartEvent_ShrineID__Enum>(get_class());
        }
    } // namespace MoonTelemetryShrineStartEvent_ShrineID__Enum
} // namespace app::classes::types
