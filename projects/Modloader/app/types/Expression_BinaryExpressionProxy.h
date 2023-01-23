#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_BinaryExpressionProxy__Class.h>
#include <Modloader/app/structs/Expression_BinaryExpressionProxy.h>

namespace app::classes::types {
    namespace Expression_BinaryExpressionProxy {
        namespace {
            inline app::Expression_BinaryExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_BinaryExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_BinaryExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_BinaryExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "BinaryExpressionProxy");
        }
        inline app::Expression_BinaryExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_BinaryExpressionProxy>(get_class());
        }
    } // namespace Expression_BinaryExpressionProxy
} // namespace app::classes::types
