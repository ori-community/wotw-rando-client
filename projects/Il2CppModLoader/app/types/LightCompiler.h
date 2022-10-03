#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCompiler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCompiler__Class** type_info;
        inline app::LightCompiler__Class* get_class() {
            return il2cpp::get_class<app::LightCompiler__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightCompiler");
        }
        inline app::LightCompiler* create() {
            return il2cpp::create_object<app::LightCompiler>(get_class());
        }
    } // namespace LightCompiler
} // namespace app::classes::types
