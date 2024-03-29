#pragma once
#include <Modloader/app/structs/InvocationExpression4.h>
#include <Modloader/app/structs/InvocationExpression4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression4 {
        inline app::InvocationExpression4__Class** type_info() {
            static app::InvocationExpression4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvocationExpression4__Class**)(modloader::win::memory::resolve_rva(0x04742198));
            }
            return cache;
        }
        inline app::InvocationExpression4__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression4__Class>(type_info(), "System.Linq.Expressions", "InvocationExpression4");
        }
        inline app::InvocationExpression4* create() {
            return il2cpp::create_object<app::InvocationExpression4>(get_class());
        }
    } // namespace InvocationExpression4
} // namespace app::classes::types
