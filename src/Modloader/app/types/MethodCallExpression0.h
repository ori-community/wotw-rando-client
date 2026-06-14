#pragma once
#include <Modloader/app/structs/MethodCallExpression0.h>
#include <Modloader/app/structs/MethodCallExpression0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression0 {
        inline app::MethodCallExpression0__Class** type_info() {
            static app::MethodCallExpression0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCallExpression0__Class**)(modloader::win::memory::resolve_rva(0x04709F10));
            }
            return cache;
        }
        inline app::MethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression0__Class>(type_info(), "System.Linq.Expressions", "MethodCallExpression0");
        }
        inline app::MethodCallExpression0* create() {
            return il2cpp::create_object<app::MethodCallExpression0>(get_class());
        }
    } // namespace MethodCallExpression0
} // namespace app::classes::types
