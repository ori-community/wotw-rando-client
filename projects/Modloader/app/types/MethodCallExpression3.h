#pragma once
#include <Modloader/app/structs/MethodCallExpression3.h>
#include <Modloader/app/structs/MethodCallExpression3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression3 {
        inline app::MethodCallExpression3__Class** type_info() {
            static app::MethodCallExpression3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCallExpression3__Class**)(modloader::win::memory::resolve_rva(0x04767BC0));
            }
            return cache;
        }
        inline app::MethodCallExpression3__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression3__Class>(type_info(), "System.Linq.Expressions", "MethodCallExpression3");
        }
        inline app::MethodCallExpression3* create() {
            return il2cpp::create_object<app::MethodCallExpression3>(get_class());
        }
    } // namespace MethodCallExpression3
} // namespace app::classes::types
