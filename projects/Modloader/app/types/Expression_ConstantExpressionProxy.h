#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_ConstantExpressionProxy__Class.h>
#include <Modloader/app/structs/Expression_ConstantExpressionProxy.h>

namespace app::classes::types {
    namespace Expression_ConstantExpressionProxy {
        namespace {
            inline app::Expression_ConstantExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_ConstantExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_ConstantExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_ConstantExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "ConstantExpressionProxy");
        }
        inline app::Expression_ConstantExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_ConstantExpressionProxy>(get_class());
        }
    } // namespace Expression_ConstantExpressionProxy
} // namespace app::classes::types
