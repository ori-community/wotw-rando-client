#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugValues_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugValues_c__Class** type_info;
        inline app::DebugValues_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugValues_c__Class>(type_info, "Game", "DebugValues", "<>c");
        }
        inline app::DebugValues_c* create() {
            return il2cpp::create_object<app::DebugValues_c>(get_class());
        }
    } // namespace DebugValues_c
} // namespace app::classes::types
