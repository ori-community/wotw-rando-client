#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EtwSession_c_DisplayClass1_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EtwSession_c_DisplayClass1_0__Class** type_info;
        inline app::EtwSession_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EtwSession_c_DisplayClass1_0__Class>(type_info, "System.Diagnostics.Tracing", "EtwSession", "<>c__DisplayClass1_0");
        }
        inline app::EtwSession_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::EtwSession_c_DisplayClass1_0>(get_class());
        }
    } // namespace EtwSession_c_DisplayClass1_0
} // namespace app::classes::types
