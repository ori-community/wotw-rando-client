#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Expression_MemberInitExpressionProxy {
        namespace {
            inline app::Expression_MemberInitExpressionProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_MemberInitExpressionProxy__Class** type_info = &type_info_ref;
        inline app::Expression_MemberInitExpressionProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_MemberInitExpressionProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "MemberInitExpressionProxy");
        }
        inline app::Expression_MemberInitExpressionProxy* create() {
            return il2cpp::create_object<app::Expression_MemberInitExpressionProxy>(get_class());
        }
    } // namespace Expression_MemberInitExpressionProxy
} // namespace app::classes::types
