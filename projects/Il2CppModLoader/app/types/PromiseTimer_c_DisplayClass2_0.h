#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PromiseTimer_c_DisplayClass2_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PromiseTimer_c_DisplayClass2_0__Class** type_info;
        inline app::PromiseTimer_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PromiseTimer_c_DisplayClass2_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseTimer", "<>c__DisplayClass2_0");
        }
        inline app::PromiseTimer_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::PromiseTimer_c_DisplayClass2_0>(get_class());
        }
    } // namespace PromiseTimer_c_DisplayClass2_0
} // namespace app::classes::types
