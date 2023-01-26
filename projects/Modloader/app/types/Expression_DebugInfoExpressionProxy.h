#pragma once
#include <Modloader/app/structs/Expression_DebugInfoExpressionProxy.h>
#include <Modloader/app/structs/Expression_DebugInfoExpressionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_DebugInfoExpressionProxy {
        inline app::Expression_DebugInfoExpressionProxy__Class** type_info() {
            static app::Expression_DebugInfoExpressionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_DebugInfoExpressionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_DebugInfoExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_DebugInfoExpressionProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "DebugInfoExpressionProxy");
        }
        inline app::Expression_DebugInfoExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_DebugInfoExpressionProxy>(get_class());
        }
    } // namespace Expression_DebugInfoExpressionProxy
} // namespace app::classes::types
