#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint_ConstraintRole__Enum {
        namespace {
            app::CompiledIdentityConstraint_ConstraintRole__Enum__Class* type_info_ref = nullptr;
        }
        app::CompiledIdentityConstraint_ConstraintRole__Enum__Class** type_info = &type_info_ref;
        inline app::CompiledIdentityConstraint_ConstraintRole__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CompiledIdentityConstraint_ConstraintRole__Enum__Class>(type_info, "System.Xml.Schema", "CompiledIdentityConstraint", "ConstraintRole");
        }
        inline app::CompiledIdentityConstraint_ConstraintRole__Enum* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint_ConstraintRole__Enum>(get_class());
        }
    } // namespace CompiledIdentityConstraint_ConstraintRole__Enum
} // namespace app::classes::types
