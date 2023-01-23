#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MethodCallExpression__Class.h>
#include <Modloader/app/structs/MethodCallExpression.h>

namespace app::classes::types {
    namespace MethodCallExpression {
        inline app::MethodCallExpression__Class** type_info = (app::MethodCallExpression__Class**)(modloader::win::memory::resolve_rva(0x0471F260));
        inline app::MethodCallExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression");
        }
        inline app::MethodCallExpression* create() {
            return il2cpp::create_object<app::MethodCallExpression>(get_class());
        }
    } // namespace MethodCallExpression
} // namespace app::classes::types
