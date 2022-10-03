#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryShrineEndEvent_ShrineResult__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class** type_info;
        inline app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryShrineEndEvent_ShrineResult__Enum__Class>(type_info, "", "MoonTelemetryShrineEndEvent", "ShrineResult");
        }
        inline app::MoonTelemetryShrineEndEvent_ShrineResult__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryShrineEndEvent_ShrineResult__Enum>(get_class());
        }
    } // namespace MoonTelemetryShrineEndEvent_ShrineResult__Enum
} // namespace app::classes::types
