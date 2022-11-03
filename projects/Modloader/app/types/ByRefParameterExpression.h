#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByRefParameterExpression {
        inline app::ByRefParameterExpression__Class** type_info = (app::ByRefParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x0473F498));
        inline app::ByRefParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::ByRefParameterExpression__Class>(type_info, "System.Linq.Expressions", "ByRefParameterExpression");
        }
        inline app::ByRefParameterExpression* create() {
            return il2cpp::create_object<app::ByRefParameterExpression>(get_class());
        }
    } // namespace ByRefParameterExpression
} // namespace app::classes::types
