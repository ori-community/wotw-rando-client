#pragma once
#include <Modloader/app/structs/ShaderID_EdgeDetection.h>
#include <Modloader/app/structs/ShaderID_EdgeDetection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_EdgeDetection {
        inline app::ShaderID_EdgeDetection__Class** type_info() {
            static app::ShaderID_EdgeDetection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_EdgeDetection__Class**)(modloader::win::memory::resolve_rva(0x04763B88));
            }
            return cache;
        }
        inline app::ShaderID_EdgeDetection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EdgeDetection__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_EdgeDetection");
        }
        inline app::ShaderID_EdgeDetection* create() {
            return il2cpp::create_object<app::ShaderID_EdgeDetection>(get_class());
        }
    } // namespace ShaderID_EdgeDetection
} // namespace app::classes::types
