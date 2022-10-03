#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventProvider_c_DisplayClass44_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventProvider_c_DisplayClass44_0__Class** type_info;
        inline app::EventProvider_c_DisplayClass44_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_c_DisplayClass44_0__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider", "<>c__DisplayClass44_0");
        }
        inline app::EventProvider_c_DisplayClass44_0* create() {
            return il2cpp::create_object<app::EventProvider_c_DisplayClass44_0>(get_class());
        }
    } // namespace EventProvider_c_DisplayClass44_0
} // namespace app::classes::types
