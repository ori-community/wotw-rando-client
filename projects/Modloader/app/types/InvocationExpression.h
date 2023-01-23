#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InvocationExpression__Class.h>
#include <Modloader/app/structs/InvocationExpression.h>

namespace app::classes::types {
    namespace InvocationExpression {
        inline app::InvocationExpression__Class** type_info = (app::InvocationExpression__Class**)(modloader::win::memory::resolve_rva(0x04743930));
        inline app::InvocationExpression__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression__Class>(type_info, "System.Linq.Expressions", "InvocationExpression");
        }
        inline app::InvocationExpression* create() {
            return il2cpp::create_object<app::InvocationExpression>(get_class());
        }
    } // namespace InvocationExpression
} // namespace app::classes::types
