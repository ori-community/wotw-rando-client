#pragma once
#include <Modloader/app/structs/CompiledIdentityConstraint_ConstraintRole__Enum.h>
#include <Modloader/app/structs/CompiledIdentityConstraint_ConstraintRole__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint_ConstraintRole__Enum {
        inline app::CompiledIdentityConstraint_ConstraintRole__Enum__Class** type_info() {
            static app::CompiledIdentityConstraint_ConstraintRole__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompiledIdentityConstraint_ConstraintRole__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompiledIdentityConstraint_ConstraintRole__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CompiledIdentityConstraint_ConstraintRole__Enum__Class>(type_info(), "System.Xml.Schema", "CompiledIdentityConstraint", "ConstraintRole");
        }
        inline app::CompiledIdentityConstraint_ConstraintRole__Enum* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint_ConstraintRole__Enum>(get_class());
        }
    } // namespace CompiledIdentityConstraint_ConstraintRole__Enum
} // namespace app::classes::types
