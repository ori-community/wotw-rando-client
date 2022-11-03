#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvocationExpression0 {
        inline app::InvocationExpression0__Class** type_info = (app::InvocationExpression0__Class**)(modloader::win::memory::resolve_rva(0x04797368));
        inline app::InvocationExpression0__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression0__Class>(type_info, "System.Linq.Expressions", "InvocationExpression0");
        }
        inline app::InvocationExpression0* create() {
            return il2cpp::create_object<app::InvocationExpression0>(get_class());
        }
    } // namespace InvocationExpression0
} // namespace app::classes::types
