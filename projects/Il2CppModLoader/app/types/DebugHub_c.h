#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugHub_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugHub_c__Class** type_info;
        inline app::DebugHub_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugHub_c__Class>(type_info, "", "DebugHub", "<>c");
        }
        inline app::DebugHub_c* create() {
            return il2cpp::create_object<app::DebugHub_c>(get_class());
        }
    } // namespace DebugHub_c
} // namespace app::classes::types
