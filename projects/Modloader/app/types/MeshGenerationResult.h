#pragma once
#include <Modloader/app/structs/MeshGenerationResult.h>
#include <Modloader/app/structs/MeshGenerationResult__Boxed.h>
#include <Modloader/app/structs/MeshGenerationResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshGenerationResult {
        inline app::MeshGenerationResult__Class** type_info() {
            static app::MeshGenerationResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshGenerationResult__Class**)(modloader::win::memory::resolve_rva(0x047960B8));
            }
            return cache;
        }
        inline app::MeshGenerationResult__Class* get_class() {
            return il2cpp::get_class<app::MeshGenerationResult__Class>(type_info(), "UnityEngine.Experimental.XR", "MeshGenerationResult");
        }
        inline app::MeshGenerationResult* create() {
            return il2cpp::create_object<app::MeshGenerationResult>(get_class());
        }
        inline app::MeshGenerationResult__Boxed* box(app::MeshGenerationResult value) {
            return il2cpp::box_value<app::MeshGenerationResult__Boxed>(get_class(), value);
        }
    } // namespace MeshGenerationResult
} // namespace app::classes::types
