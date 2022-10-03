#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SearchDebugMenuItem_c__Class** type_info;
        inline app::SearchDebugMenuItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SearchDebugMenuItem_c__Class>(type_info, "", "SearchDebugMenuItem", "<>c");
        }
        inline app::SearchDebugMenuItem_c* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem_c>(get_class());
        }
    } // namespace SearchDebugMenuItem_c
} // namespace app::classes::types
