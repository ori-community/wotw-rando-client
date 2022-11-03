#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Texture3D {
        inline app::Texture3D__Class** type_info = (app::Texture3D__Class**)(modloader::win::memory::resolve_rva(0x04728B98));
        inline app::Texture3D__Class* get_class() {
            return il2cpp::get_class<app::Texture3D__Class>(type_info, "UnityEngine", "Texture3D");
        }
        inline app::Texture3D* create() {
            return il2cpp::create_object<app::Texture3D>(get_class());
        }
    } // namespace Texture3D
} // namespace app::classes::types
