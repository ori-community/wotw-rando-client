#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TestBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BindingRestrictions_TestBuilder__Class** type_info;
        inline app::BindingRestrictions_TestBuilder__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TestBuilder__Class>(type_info, "System.Dynamic", "BindingRestrictions", "TestBuilder");
        }
        inline app::BindingRestrictions_TestBuilder* create() {
            return il2cpp::create_object<app::BindingRestrictions_TestBuilder>(get_class());
        }
    } // namespace BindingRestrictions_TestBuilder
} // namespace app::classes::types
