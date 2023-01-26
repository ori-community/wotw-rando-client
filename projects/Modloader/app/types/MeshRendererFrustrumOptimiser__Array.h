#pragma once
#include <Modloader/app/structs/MeshRendererFrustrumOptimiser__Array.h>
#include <Modloader/app/structs/MeshRendererFrustrumOptimiser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshRendererFrustrumOptimiser__Array {
        inline app::MeshRendererFrustrumOptimiser__Array__Class** type_info() {
            static app::MeshRendererFrustrumOptimiser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshRendererFrustrumOptimiser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshRendererFrustrumOptimiser__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshRendererFrustrumOptimiser__Array__Class>(type_info(), "", "MeshRendererFrustrumOptimiser[]");
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create() {
            return il2cpp::create_object<app::MeshRendererFrustrumOptimiser__Array>(get_class());
        }
    } // namespace MeshRendererFrustrumOptimiser__Array
} // namespace app::classes::types
