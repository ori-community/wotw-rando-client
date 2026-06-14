#pragma once
#include <Modloader/app/structs/InvocationExpression2.h>
#include <Modloader/app/structs/InvocationExpression2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression2 {
        inline app::InvocationExpression2__Class** type_info() {
            static app::InvocationExpression2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvocationExpression2__Class**)(modloader::win::memory::resolve_rva(0x04757F60));
            }
            return cache;
        }
        inline app::InvocationExpression2__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression2__Class>(type_info(), "System.Linq.Expressions", "InvocationExpression2");
        }
        inline app::InvocationExpression2* create() {
            return il2cpp::create_object<app::InvocationExpression2>(get_class());
        }
    } // namespace InvocationExpression2
} // namespace app::classes::types
