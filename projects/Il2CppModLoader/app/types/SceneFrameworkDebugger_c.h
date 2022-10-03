#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFrameworkDebugger_c__Class** type_info;
        inline app::SceneFrameworkDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFrameworkDebugger_c__Class>(type_info, "", "SceneFrameworkDebugger", "<>c");
        }
        inline app::SceneFrameworkDebugger_c* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger_c>(get_class());
        }
    } // namespace SceneFrameworkDebugger_c
} // namespace app::classes::types
