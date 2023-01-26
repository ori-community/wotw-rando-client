#pragma once
#include <Modloader/app/structs/StencilMaterial.h>
#include <Modloader/app/structs/StencilMaterial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial {
        inline app::StencilMaterial__Class** type_info() {
            static app::StencilMaterial__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StencilMaterial__Class**)(modloader::win::memory::resolve_rva(0x047454E8));
            }
            return cache;
        }
        inline app::StencilMaterial__Class* get_class() {
            return il2cpp::get_class<app::StencilMaterial__Class>(type_info(), "UnityEngine.UI", "StencilMaterial");
        }
        inline app::StencilMaterial* create() {
            return il2cpp::create_object<app::StencilMaterial>(get_class());
        }
    } // namespace StencilMaterial
} // namespace app::classes::types
