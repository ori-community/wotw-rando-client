#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterExpression__Array {
        inline app::ParameterExpression__Array__Class** type_info = (app::ParameterExpression__Array__Class**)(modloader::win::memory::resolve_rva(0x04727060));
        inline app::ParameterExpression__Array__Class* get_class() {
            return il2cpp::get_class<app::ParameterExpression__Array__Class>(type_info, "System.Linq.Expressions", "ParameterExpression[]");
        }
        inline app::ParameterExpression__Array* create() {
            return il2cpp::create_object<app::ParameterExpression__Array>(get_class());
        }
    } // namespace ParameterExpression__Array
} // namespace app::classes::types
