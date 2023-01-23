#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_UnaryExpressionProxy__Class.h>
#include <Modloader/app/structs/Expression_UnaryExpressionProxy.h>

namespace app::classes::types {
    namespace Expression_UnaryExpressionProxy {
        namespace {
            inline app::Expression_UnaryExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_UnaryExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_UnaryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_UnaryExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "UnaryExpressionProxy");
        }
        inline app::Expression_UnaryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_UnaryExpressionProxy>(get_class());
        }
    } // namespace Expression_UnaryExpressionProxy
} // namespace app::classes::types
