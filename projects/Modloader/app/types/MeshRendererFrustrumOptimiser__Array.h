#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshRendererFrustrumOptimiser__Array__Class.h>
#include <Modloader/app/structs/MeshRendererFrustrumOptimiser__Array.h>

namespace app::classes::types {
    namespace MeshRendererFrustrumOptimiser__Array {
        namespace {
            inline app::MeshRendererFrustrumOptimiser__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeshRendererFrustrumOptimiser__Array__Class** type_info = &type_info_ref;
        inline app::MeshRendererFrustrumOptimiser__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshRendererFrustrumOptimiser__Array__Class>(type_info, "", "MeshRendererFrustrumOptimiser[]");
        }
        inline app::MeshRendererFrustrumOptimiser__Array* create() {
            return il2cpp::create_object<app::MeshRendererFrustrumOptimiser__Array>(get_class());
        }
    } // namespace MeshRendererFrustrumOptimiser__Array
} // namespace app::classes::types
