#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelScopeInfo__Array {
        namespace {
            app::LabelScopeInfo__Array__Class* type_info_ref = nullptr;
        }
        app::LabelScopeInfo__Array__Class** type_info = &type_info_ref;
        inline app::LabelScopeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelScopeInfo__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelScopeInfo[]");
        }
        inline app::LabelScopeInfo__Array* create() {
            return il2cpp::create_object<app::LabelScopeInfo__Array>(get_class());
        }
    } // namespace LabelScopeInfo__Array
} // namespace app::classes::types
