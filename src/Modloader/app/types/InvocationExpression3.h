#pragma once
#include <Modloader/app/structs/InvocationExpression3.h>
#include <Modloader/app/structs/InvocationExpression3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression3 {
        inline app::InvocationExpression3__Class** type_info() {
            static app::InvocationExpression3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvocationExpression3__Class**)(modloader::win::memory::resolve_rva(0x0472E3F0));
            }
            return cache;
        }
        inline app::InvocationExpression3__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression3__Class>(type_info(), "System.Linq.Expressions", "InvocationExpression3");
        }
        inline app::InvocationExpression3* create() {
            return il2cpp::create_object<app::InvocationExpression3>(get_class());
        }
    } // namespace InvocationExpression3
} // namespace app::classes::types
