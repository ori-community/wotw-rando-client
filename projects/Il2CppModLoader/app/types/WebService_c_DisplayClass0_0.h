#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebService_c_DisplayClass0_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebService_c_DisplayClass0_0__Class** type_info;
        inline app::WebService_c_DisplayClass0_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebService_c_DisplayClass0_0__Class>(type_info, "Moon.Race.Networking", "WebService", "<>c__DisplayClass0_0");
        }
        inline app::WebService_c_DisplayClass0_0* create() {
            return il2cpp::create_object<app::WebService_c_DisplayClass0_0>(get_class());
        }
    } // namespace WebService_c_DisplayClass0_0
} // namespace app::classes::types
