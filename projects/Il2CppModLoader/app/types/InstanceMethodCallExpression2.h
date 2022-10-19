#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression2 {
        inline app::InstanceMethodCallExpression2__Class** type_info = (app::InstanceMethodCallExpression2__Class**)(modloader::win::memory::resolve_rva(0x04731650));
        inline app::InstanceMethodCallExpression2__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression2__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression2");
        }
        inline app::InstanceMethodCallExpression2* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression2>(get_class());
        }
    } // namespace InstanceMethodCallExpression2
} // namespace app::classes::types
