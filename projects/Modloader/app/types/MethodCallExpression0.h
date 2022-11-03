#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodCallExpression0 {
        inline app::MethodCallExpression0__Class** type_info = (app::MethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x04709F10));
        inline app::MethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression0__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression0");
        }
        inline app::MethodCallExpression0* create() {
            return il2cpp::create_object<app::MethodCallExpression0>(get_class());
        }
    } // namespace MethodCallExpression0
} // namespace app::classes::types
