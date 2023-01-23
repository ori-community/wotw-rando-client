#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightCompiler_QuoteVisitor__Class.h>
#include <Modloader/app/structs/LightCompiler_QuoteVisitor.h>

namespace app::classes::types {
    namespace LightCompiler_QuoteVisitor {
        inline app::LightCompiler_QuoteVisitor__Class** type_info = (app::LightCompiler_QuoteVisitor__Class**)(modloader::win::memory::resolve_rva(0x04705AC8));
        inline app::LightCompiler_QuoteVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCompiler_QuoteVisitor__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightCompiler", "QuoteVisitor");
        }
        inline app::LightCompiler_QuoteVisitor* create() {
            return il2cpp::create_object<app::LightCompiler_QuoteVisitor>(get_class());
        }
    } // namespace LightCompiler_QuoteVisitor
} // namespace app::classes::types
