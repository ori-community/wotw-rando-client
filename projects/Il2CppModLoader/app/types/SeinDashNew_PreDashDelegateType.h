#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDashNew_PreDashDelegateType {
        inline app::SeinDashNew_PreDashDelegateType__Class** type_info = (app::SeinDashNew_PreDashDelegateType__Class**)(modloader::win::memory::resolve_rva(0x04736BE8));
        inline app::SeinDashNew_PreDashDelegateType__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashNew_PreDashDelegateType__Class>(type_info, "", "SeinDashNew", "PreDashDelegateType");
        }
        inline app::SeinDashNew_PreDashDelegateType* create() {
            return il2cpp::create_object<app::SeinDashNew_PreDashDelegateType>(get_class());
        }
    } // namespace SeinDashNew_PreDashDelegateType
} // namespace app::classes::types
