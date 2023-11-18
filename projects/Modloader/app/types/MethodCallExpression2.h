#pragma once
#include <Modloader/app/structs/MethodCallExpression2.h>
#include <Modloader/app/structs/MethodCallExpression2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression2 {
        inline app::MethodCallExpression2__Class** type_info() {
            static app::MethodCallExpression2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCallExpression2__Class**)(modloader::win::memory::resolve_rva(0x04733190));
            }
            return cache;
        }
        inline app::MethodCallExpression2__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression2__Class>(type_info(), "System.Linq.Expressions", "MethodCallExpression2");
        }
        inline app::MethodCallExpression2* create() {
            return il2cpp::create_object<app::MethodCallExpression2>(get_class());
        }
    } // namespace MethodCallExpression2
} // namespace app::classes::types
