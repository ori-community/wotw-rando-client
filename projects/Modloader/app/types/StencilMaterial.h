#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StencilMaterial {
        inline app::StencilMaterial__Class** type_info = (app::StencilMaterial__Class**)(modloader::win::memory::resolve_rva(0x047454E8));
        inline app::StencilMaterial__Class* get_class() {
            return il2cpp::get_class<app::StencilMaterial__Class>(type_info, "UnityEngine.UI", "StencilMaterial");
        }
        inline app::StencilMaterial* create() {
            return il2cpp::create_object<app::StencilMaterial>(get_class());
        }
    } // namespace StencilMaterial
} // namespace app::classes::types
