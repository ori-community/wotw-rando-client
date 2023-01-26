#pragma once
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodCallExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression {
        inline app::MethodCallExpression__Class** type_info() {
            static app::MethodCallExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCallExpression__Class**)(modloader::win::memory::resolve_rva(0x0471F260));
            }
            return cache;
        }
        inline app::MethodCallExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression__Class>(type_info(), "System.Linq.Expressions", "MethodCallExpression");
        }
        inline app::MethodCallExpression* create() {
            return il2cpp::create_object<app::MethodCallExpression>(get_class());
        }
    } // namespace MethodCallExpression
} // namespace app::classes::types
