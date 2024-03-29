#pragma once
#include <Modloader/app/structs/InvocationExpression5.h>
#include <Modloader/app/structs/InvocationExpression5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression5 {
        inline app::InvocationExpression5__Class** type_info() {
            static app::InvocationExpression5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvocationExpression5__Class**)(modloader::win::memory::resolve_rva(0x0473F4C0));
            }
            return cache;
        }
        inline app::InvocationExpression5__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression5__Class>(type_info(), "System.Linq.Expressions", "InvocationExpression5");
        }
        inline app::InvocationExpression5* create() {
            return il2cpp::create_object<app::InvocationExpression5>(get_class());
        }
    } // namespace InvocationExpression5
} // namespace app::classes::types
