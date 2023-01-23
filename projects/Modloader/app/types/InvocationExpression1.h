#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InvocationExpression1__Class.h>
#include <Modloader/app/structs/InvocationExpression1.h>

namespace app::classes::types {
    namespace InvocationExpression1 {
        inline app::InvocationExpression1__Class** type_info = (app::InvocationExpression1__Class**)(modloader::win::memory::resolve_rva(0x04706408));
        inline app::InvocationExpression1__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression1__Class>(type_info, "System.Linq.Expressions", "InvocationExpression1");
        }
        inline app::InvocationExpression1* create() {
            return il2cpp::create_object<app::InvocationExpression1>(get_class());
        }
    } // namespace InvocationExpression1
} // namespace app::classes::types
