#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackHelpers_c_DisplayClass8_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallbackHelpers_c_DisplayClass8_0__Class** type_info;
        inline app::CallbackHelpers_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CallbackHelpers_c_DisplayClass8_0__Class>(type_info, "Mono.Net.Security.Private", "CallbackHelpers", "<>c__DisplayClass8_0");
        }
        inline app::CallbackHelpers_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::CallbackHelpers_c_DisplayClass8_0>(get_class());
        }
    } // namespace CallbackHelpers_c_DisplayClass8_0
} // namespace app::classes::types
