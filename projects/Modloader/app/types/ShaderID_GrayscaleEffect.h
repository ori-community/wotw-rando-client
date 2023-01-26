#pragma once
#include <Modloader/app/structs/ShaderID_GrayscaleEffect.h>
#include <Modloader/app/structs/ShaderID_GrayscaleEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GrayscaleEffect {
        inline app::ShaderID_GrayscaleEffect__Class** type_info() {
            static app::ShaderID_GrayscaleEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GrayscaleEffect__Class**)(modloader::win::memory::resolve_rva(0x04731768));
            }
            return cache;
        }
        inline app::ShaderID_GrayscaleEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrayscaleEffect__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_GrayscaleEffect");
        }
        inline app::ShaderID_GrayscaleEffect* create() {
            return il2cpp::create_object<app::ShaderID_GrayscaleEffect>(get_class());
        }
    } // namespace ShaderID_GrayscaleEffect
} // namespace app::classes::types
