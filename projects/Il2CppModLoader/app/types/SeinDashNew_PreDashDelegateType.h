#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashNew_PreDashDelegateType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashNew_PreDashDelegateType__Class** type_info;
        inline app::SeinDashNew_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashNew_PreDashDelegateType__Class>(type_info, "", "SeinDashNew", "PreDashDelegateType");
        }
        inline app::SeinDashNew_PreDashDelegateType* create() {
            return il2cpp::create_object<app::SeinDashNew_PreDashDelegateType>(get_class());
        }
    } // namespace SeinDashNew_PreDashDelegateType
} // namespace app::classes::types
