#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncGPUReadbackRequest {
        inline app::AsyncGPUReadbackRequest__Class** type_info = (app::AsyncGPUReadbackRequest__Class**)(modloader::win::memory::resolve_rva(0x04735A08));
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
