#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshRendererFrustrumOptimiser__Array {
        namespace {
            app::MeshRendererFrustrumOptimiser__Array__Class* type_info_ref = nullptr;
        }
        app::MeshRendererFrustrumOptimiser__Array__Class** type_info = &type_info_ref;
        inline app::MeshRendererFrustrumOptimiser__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshRendererFrustrumOptimiser__Array__Class>(type_info, "", "MeshRendererFrustrumOptimiser[]");
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create() {
            return il2cpp::create_object<app::MeshRendererFrustrumOptimiser__Array>(get_class());
        }
    } // namespace MeshRendererFrustrumOptimiser__Array
} // namespace app::classes::types
