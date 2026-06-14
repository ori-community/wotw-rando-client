#pragma once
#include <Modloader/app/structs/IFrustumOptimizable__Array.h>
#include <Modloader/app/structs/IFrustumOptimizable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFrustumOptimizable__Array {
        inline app::IFrustumOptimizable__Array__Class** type_info() {
            static app::IFrustumOptimizable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IFrustumOptimizable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IFrustumOptimizable__Array__Class* get_class() {
            return il2cpp::get_class<app::IFrustumOptimizable__Array__Class>(type_info(), "", "IFrustumOptimizable[]");
        }
        inline app::IFrustumOptimizable__Array* create() {
            return il2cpp::create_object<app::IFrustumOptimizable__Array>(get_class());
        }
    } // namespace IFrustumOptimizable__Array
} // namespace app::classes::types
