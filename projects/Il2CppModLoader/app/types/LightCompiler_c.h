#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCompiler_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCompiler_c__Class** type_info;
        inline app::LightCompiler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCompiler_c__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightCompiler", "<>c");
        }
        inline app::LightCompiler_c* create() {
            return il2cpp::create_object<app::LightCompiler_c>(get_class());
        }
    } // namespace LightCompiler_c
} // namespace app::classes::types
