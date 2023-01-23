#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_DefaultExpressionProxy__Class.h>
#include <Modloader/app/structs/Expression_DefaultExpressionProxy.h>

namespace app::classes::types {
    namespace Expression_DefaultExpressionProxy {
        namespace {
            inline app::Expression_DefaultExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_DefaultExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_DefaultExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_DefaultExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "DefaultExpressionProxy");
        }
        inline app::Expression_DefaultExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_DefaultExpressionProxy>(get_class());
        }
    } // namespace Expression_DefaultExpressionProxy
} // namespace app::classes::types
