#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCompiler_QuoteVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCompiler_QuoteVisitor__Class** type_info;
        inline app::LightCompiler_QuoteVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCompiler_QuoteVisitor__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightCompiler", "QuoteVisitor");
        }
        inline app::LightCompiler_QuoteVisitor* create() {
            return il2cpp::create_object<app::LightCompiler_QuoteVisitor>(get_class());
        }
    } // namespace LightCompiler_QuoteVisitor
} // namespace app::classes::types
