#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Expression_RuntimeVariablesExpressionProxy {
        namespace {
            inline app::Expression_RuntimeVariablesExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_RuntimeVariablesExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_RuntimeVariablesExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_RuntimeVariablesExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "RuntimeVariablesExpressionProxy");
        }
        inline app::Expression_RuntimeVariablesExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_RuntimeVariablesExpressionProxy>(get_class());
        }
    } // namespace Expression_RuntimeVariablesExpressionProxy
} // namespace app::classes::types
