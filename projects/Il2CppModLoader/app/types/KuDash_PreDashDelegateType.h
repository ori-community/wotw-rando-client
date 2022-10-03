#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuDash_PreDashDelegateType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KuDash_PreDashDelegateType__Class** type_info;
        inline app::KuDash_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_PreDashDelegateType__Class>(type_info, "", "KuDash", "PreDashDelegateType");
        }
        inline app::KuDash_PreDashDelegateType* create() {
            return il2cpp::create_object<app::KuDash_PreDashDelegateType>(get_class());
        }
    } // namespace KuDash_PreDashDelegateType
} // namespace app::classes::types
