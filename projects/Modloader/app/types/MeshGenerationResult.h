#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshGenerationResult__Class.h>
#include <Modloader/app/structs/MeshGenerationResult.h>
#include <Modloader/app/structs/MeshGenerationResult__Boxed.h>

namespace app::classes::types {
    namespace MeshGenerationResult {
        inline app::MeshGenerationResult__Class** type_info = (app::MeshGenerationResult__Class**)(modloader::win::memory::resolve_rva(0x047960B8));
        inline app::MeshGenerationResult__Class* get_class() {
            return il2cpp::get_class<app::MeshGenerationResult__Class>(type_info, "UnityEngine.Experimental.XR", "MeshGenerationResult");
        }
        inline app::MeshGenerationResult* create() {
            return il2cpp::create_object<app::MeshGenerationResult>(get_class());
        }
        inline app::MeshGenerationResult__Boxed* box(app::MeshGenerationResult value) {
            return il2cpp::box_value<app::MeshGenerationResult__Boxed>(get_class(), value);
        }
    } // namespace MeshGenerationResult
} // namespace app::classes::types
