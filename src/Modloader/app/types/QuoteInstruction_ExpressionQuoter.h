#pragma once
#include <Modloader/app/structs/QuoteInstruction_ExpressionQuoter.h>
#include <Modloader/app/structs/QuoteInstruction_ExpressionQuoter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuoteInstruction_ExpressionQuoter {
        inline app::QuoteInstruction_ExpressionQuoter__Class** type_info() {
            static app::QuoteInstruction_ExpressionQuoter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuoteInstruction_ExpressionQuoter__Class**)(modloader::win::memory::resolve_rva(0x04741180));
            }
            return cache;
        }
        inline app::QuoteInstruction_ExpressionQuoter__Class* get_class() {
            return il2cpp::get_nested_class<app::QuoteInstruction_ExpressionQuoter__Class>(type_info(), "System.Linq.Expressions.Interpreter", "QuoteInstruction", "ExpressionQuoter");
        }
        inline app::QuoteInstruction_ExpressionQuoter* create() {
            return il2cpp::create_object<app::QuoteInstruction_ExpressionQuoter>(get_class());
        }
    } // namespace QuoteInstruction_ExpressionQuoter
} // namespace app::classes::types
