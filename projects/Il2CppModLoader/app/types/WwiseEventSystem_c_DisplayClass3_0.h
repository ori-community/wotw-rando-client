#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_c_DisplayClass3_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem_c_DisplayClass3_0__Class** type_info;
        inline app::WwiseEventSystem_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_c_DisplayClass3_0__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "<>c__DisplayClass3_0");
        }
        inline app::WwiseEventSystem_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::WwiseEventSystem_c_DisplayClass3_0>(get_class());
        }
    } // namespace WwiseEventSystem_c_DisplayClass3_0
} // namespace app::classes::types
