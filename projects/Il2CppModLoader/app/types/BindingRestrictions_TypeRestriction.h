#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindingRestrictions_TypeRestriction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BindingRestrictions_TypeRestriction__Class** type_info;
        inline app::BindingRestrictions_TypeRestriction__Class* get_class() {
            return il2cpp::get_nested_class<app::BindingRestrictions_TypeRestriction__Class>(type_info, "System.Dynamic", "BindingRestrictions", "TypeRestriction");
        }
        inline app::BindingRestrictions_TypeRestriction* create() {
            return il2cpp::create_object<app::BindingRestrictions_TypeRestriction>(get_class());
        }
    } // namespace BindingRestrictions_TypeRestriction
} // namespace app::classes::types
