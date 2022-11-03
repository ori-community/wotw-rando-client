#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeVariablesExpression {
        inline app::RuntimeVariablesExpression__Class** type_info = (app::RuntimeVariablesExpression__Class**)(modloader::win::memory::resolve_rva(0x047204F8));
        inline app::RuntimeVariablesExpression__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariablesExpression__Class>(type_info, "System.Linq.Expressions", "RuntimeVariablesExpression");
        }
        inline app::RuntimeVariablesExpression* create() {
            return il2cpp::create_object<app::RuntimeVariablesExpression>(get_class());
        }
    } // namespace RuntimeVariablesExpression
} // namespace app::classes::types
