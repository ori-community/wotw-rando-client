#pragma once
#include <Modloader/app/structs/OpAssignMethodConversionBinaryExpression.h>
#include <Modloader/app/structs/OpAssignMethodConversionBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OpAssignMethodConversionBinaryExpression {
        inline app::OpAssignMethodConversionBinaryExpression__Class** type_info() {
            static app::OpAssignMethodConversionBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OpAssignMethodConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04779A80));
            }
            return cache;
        }
        inline app::OpAssignMethodConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::OpAssignMethodConversionBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "OpAssignMethodConversionBinaryExpression");
        }
        inline app::OpAssignMethodConversionBinaryExpression* create() {
            return il2cpp::create_object<app::OpAssignMethodConversionBinaryExpression>(get_class());
        }
    } // namespace OpAssignMethodConversionBinaryExpression
} // namespace app::classes::types
