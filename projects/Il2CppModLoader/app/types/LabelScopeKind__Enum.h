#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelScopeKind__Enum {
        namespace {
            app::LabelScopeKind__Enum__Class* type_info_ref = nullptr;
        }
        app::LabelScopeKind__Enum__Class** type_info = &type_info_ref;
        inline app::LabelScopeKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::LabelScopeKind__Enum__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelScopeKind");
        }
        inline app::LabelScopeKind__Enum* create() {
            return il2cpp::create_object<app::LabelScopeKind__Enum>(get_class());
        }
    } // namespace LabelScopeKind__Enum
} // namespace app::classes::types
