#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodCallExpression4 {
        inline app::MethodCallExpression4__Class** type_info = (app::MethodCallExpression4__Class**)(modloader::win::memory::resolve_rva(0x0478DC48));
        inline app::MethodCallExpression4__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression4__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression4");
        }
        inline app::MethodCallExpression4* create() {
            return il2cpp::create_object<app::MethodCallExpression4>(get_class());
        }
    } // namespace MethodCallExpression4
} // namespace app::classes::types
