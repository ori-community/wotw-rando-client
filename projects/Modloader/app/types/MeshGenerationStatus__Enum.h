#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshGenerationStatus__Enum {
        inline app::MeshGenerationStatus__Enum__Class** type_info = (app::MeshGenerationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793180));
        inline app::MeshGenerationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshGenerationStatus__Enum__Class>(type_info, "UnityEngine.Experimental.XR", "MeshGenerationStatus");
        }
        inline app::MeshGenerationStatus__Enum* create() {
            return il2cpp::create_object<app::MeshGenerationStatus__Enum>(get_class());
        }
    } // namespace MeshGenerationStatus__Enum
} // namespace app::classes::types
