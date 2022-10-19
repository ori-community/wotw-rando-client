#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFrustumOptimizable__Array {
        namespace {
            inline app::IFrustumOptimizable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IFrustumOptimizable__Array__Class** type_info = &type_info_ref;
        inline app::IFrustumOptimizable__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrustumOptimizable__Array__Class>(type_info, "", "IFrustumOptimizable[]");
        }
        inline app::IFrustumOptimizable__Array* create() {
            return il2cpp::create_object<app::IFrustumOptimizable__Array>(get_class());
        }
    } // namespace IFrustumOptimizable__Array
} // namespace app::classes::types
