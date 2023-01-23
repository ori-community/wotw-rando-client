#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_BlockExpressionProxy__Class.h>
#include <Modloader/app/structs/Expression_BlockExpressionProxy.h>

namespace app::classes::types {
    namespace Expression_BlockExpressionProxy {
        namespace {
            inline app::Expression_BlockExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_BlockExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_BlockExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_BlockExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "BlockExpressionProxy");
        }
        inline app::Expression_BlockExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_BlockExpressionProxy>(get_class());
        }
    } // namespace Expression_BlockExpressionProxy
} // namespace app::classes::types
