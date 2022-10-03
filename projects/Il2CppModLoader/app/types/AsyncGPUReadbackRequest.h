#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncGPUReadbackRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncGPUReadbackRequest__Class** type_info;
        inline app::AsyncGPUReadbackRequest__Class* get_class() {
            return il2cpp::get_class<app::AsyncGPUReadbackRequest__Class>(type_info, "UnityEngine.Rendering", "AsyncGPUReadbackRequest");
        }
        inline app::AsyncGPUReadbackRequest* create() {
            return il2cpp::create_object<app::AsyncGPUReadbackRequest>(get_class());
        }
        inline app::AsyncGPUReadbackRequest__Boxed* box(app::AsyncGPUReadbackRequest value) {
            return il2cpp::box_value<app::AsyncGPUReadbackRequest__Boxed>(get_class(), value);
        }
    } // namespace AsyncGPUReadbackRequest
} // namespace app::classes::types
