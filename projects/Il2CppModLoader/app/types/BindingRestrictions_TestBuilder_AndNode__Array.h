#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder_AndNode__Array {
        namespace {
            app::BindingRestrictions_TestBuilder_AndNode__Array__Class* type_info_ref = nullptr;
        }
        app::BindingRestrictions_TestBuilder_AndNode__Array__Class** type_info = &type_info_ref;
        inline app::BindingRestrictions_TestBuilder_AndNode__Array__Class* get_class() {
            return il2cpp::get_class<app::BindingRestrictions_TestBuilder_AndNode__Array__Class>(type_info, "System.Dynamic", "BindingRestrictions+TestBuilder+AndNode[]");
        }
        inline app::BindingRestrictions_TestBuilder_AndNode__Array* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder_AndNode__Array>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder_AndNode__Array
} // namespace app::classes::types
