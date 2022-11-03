#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression0 {
        inline app::InstanceMethodCallExpression0__Class** type_info = (app::InstanceMethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x0471C820));
        inline app::InstanceMethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression0__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression0");
        }
        inline app::InstanceMethodCallExpression0* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression0>(get_class());
        }
    } // namespace InstanceMethodCallExpression0
} // namespace app::classes::types
