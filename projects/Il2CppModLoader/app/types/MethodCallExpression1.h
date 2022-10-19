#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MethodCallExpression1 {
        inline app::MethodCallExpression1__Class** type_info = (app::MethodCallExpression1__Class**)(modloader::win::memory::resolve_rva(0x0477FFA0));
        inline app::MethodCallExpression1__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression1__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression1");
        }
        inline app::MethodCallExpression1* create() {
            return il2cpp::create_object<app::MethodCallExpression1>(get_class());
        }
    } // namespace MethodCallExpression1
} // namespace app::classes::types
