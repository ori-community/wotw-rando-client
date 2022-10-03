#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_InstanceRestriction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BindingRestrictions_InstanceRestriction__Class** type_info;
        inline app::BindingRestrictions_InstanceRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_InstanceRestriction__Class>(type_info, "System.Dynamic", "BindingRestrictions", "InstanceRestriction");
        }
        inline app::BindingRestrictions_InstanceRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_InstanceRestriction>(get_class());
        }
    } // namespace BindingRestrictions_InstanceRestriction
} // namespace app::classes::types
