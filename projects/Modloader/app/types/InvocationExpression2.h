#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InvocationExpression2 {
        inline app::InvocationExpression2__Class** type_info = (app::InvocationExpression2__Class**)(modloader::win::memory::resolve_rva(0x04757F60));
        inline app::InvocationExpression2__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression2__Class>(type_info, "System.Linq.Expressions", "InvocationExpression2");
        }
        inline app::InvocationExpression2* create() {
            return il2cpp::create_object<app::InvocationExpression2>(get_class());
        }
    } // namespace InvocationExpression2
} // namespace app::classes::types
