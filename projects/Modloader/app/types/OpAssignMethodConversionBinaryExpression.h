#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpAssignMethodConversionBinaryExpression {
        inline app::OpAssignMethodConversionBinaryExpression__Class** type_info = (app::OpAssignMethodConversionBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04779A80));
        inline app::OpAssignMethodConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::OpAssignMethodConversionBinaryExpression__Class>(type_info, "System.Linq.Expressions", "OpAssignMethodConversionBinaryExpression");
        }
        inline app::OpAssignMethodConversionBinaryExpression* create() {
            return il2cpp::create_object<app::OpAssignMethodConversionBinaryExpression>(get_class());
        }
    } // namespace OpAssignMethodConversionBinaryExpression
} // namespace app::classes::types
