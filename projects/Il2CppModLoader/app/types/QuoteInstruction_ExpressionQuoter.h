#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuoteInstruction_ExpressionQuoter {
        inline app::QuoteInstruction_ExpressionQuoter__Class** type_info = (app::QuoteInstruction_ExpressionQuoter__Class**)(modloader::win::memory::resolve_rva(0x04741180));
        inline app::QuoteInstruction_ExpressionQuoter__Class* get_class() {
            return il2cpp::get_nested_class<app::QuoteInstruction_ExpressionQuoter__Class>(type_info, "System.Linq.Expressions.Interpreter", "QuoteInstruction", "ExpressionQuoter");
        }
        inline app::QuoteInstruction_ExpressionQuoter* create() {
            return il2cpp::create_object<app::QuoteInstruction_ExpressionQuoter>(get_class());
        }
    } // namespace QuoteInstruction_ExpressionQuoter
} // namespace app::classes::types
