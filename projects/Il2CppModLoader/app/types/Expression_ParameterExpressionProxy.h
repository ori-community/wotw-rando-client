#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Expression_ParameterExpressionProxy {
        namespace {
            inline app::Expression_ParameterExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_ParameterExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_ParameterExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ParameterExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "ParameterExpressionProxy");
        }
        inline app::Expression_ParameterExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ParameterExpressionProxy>(get_class());
        }
    } // namespace Expression_ParameterExpressionProxy
} // namespace app::classes::types
