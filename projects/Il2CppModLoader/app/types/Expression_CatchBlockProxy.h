#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression_CatchBlockProxy {
        namespace {
            app::Expression_CatchBlockProxy__Class* type_info_ref = nullptr;
        }
        app::Expression_CatchBlockProxy__Class** type_info = &type_info_ref;
        inline app::Expression_CatchBlockProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_CatchBlockProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "CatchBlockProxy");
        }
        inline app::Expression_CatchBlockProxy* create() {
            return il2cpp::create_object<app::Expression_CatchBlockProxy>(get_class());
        }
    } // namespace Expression_CatchBlockProxy
} // namespace app::classes::types
