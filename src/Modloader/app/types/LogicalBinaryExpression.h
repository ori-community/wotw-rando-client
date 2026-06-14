#pragma once
#include <Modloader/app/structs/LogicalBinaryExpression.h>
#include <Modloader/app/structs/LogicalBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogicalBinaryExpression {
        inline app::LogicalBinaryExpression__Class** type_info() {
            static app::LogicalBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogicalBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FED8));
            }
            return cache;
        }
        inline app::LogicalBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::LogicalBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "LogicalBinaryExpression");
        }
        inline app::LogicalBinaryExpression* create() {
            return il2cpp::create_object<app::LogicalBinaryExpression>(get_class());
        }
    } // namespace LogicalBinaryExpression
} // namespace app::classes::types
