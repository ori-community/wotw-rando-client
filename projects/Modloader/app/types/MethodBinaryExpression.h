#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MethodBinaryExpression__Class.h>
#include <Modloader/app/structs/MethodBinaryExpression.h>

namespace app::classes::types {
    namespace MethodBinaryExpression {
        inline app::MethodBinaryExpression__Class** type_info = (app::MethodBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04716FA8));
        inline app::MethodBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodBinaryExpression__Class>(type_info, "System.Linq.Expressions", "MethodBinaryExpression");
        }
        inline app::MethodBinaryExpression* create() {
            return il2cpp::create_object<app::MethodBinaryExpression>(get_class());
        }
    } // namespace MethodBinaryExpression
} // namespace app::classes::types
