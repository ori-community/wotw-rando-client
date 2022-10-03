#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFrameworkDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFrameworkDebugger__Class** type_info;
        inline app::SceneFrameworkDebugger__Class* get_class() {
            return il2cpp::get_class<app::SceneFrameworkDebugger__Class>(type_info, "", "SceneFrameworkDebugger");
        }
        inline app::SceneFrameworkDebugger* create() {
            return il2cpp::create_object<app::SceneFrameworkDebugger>(get_class());
        }
    } // namespace SceneFrameworkDebugger
} // namespace app::classes::types
