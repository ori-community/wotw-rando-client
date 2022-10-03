#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogHandler_c_DisplayClass3_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogHandler_c_DisplayClass3_0__Class** type_info;
        inline app::DialogHandler_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_c_DisplayClass3_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "<>c__DisplayClass3_0");
        }
        inline app::DialogHandler_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::DialogHandler_c_DisplayClass3_0>(get_class());
        }
    } // namespace DialogHandler_c_DisplayClass3_0
} // namespace app::classes::types
