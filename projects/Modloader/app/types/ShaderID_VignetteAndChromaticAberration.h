#pragma once
#include <Modloader/app/structs/ShaderID_VignetteAndChromaticAberration.h>
#include <Modloader/app/structs/ShaderID_VignetteAndChromaticAberration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VignetteAndChromaticAberration {
        inline app::ShaderID_VignetteAndChromaticAberration__Class** type_info() {
            static app::ShaderID_VignetteAndChromaticAberration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_VignetteAndChromaticAberration__Class**)(modloader::win::memory::resolve_rva(0x04764250));
            }
            return cache;
        }
        inline app::ShaderID_VignetteAndChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VignetteAndChromaticAberration__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_VignetteAndChromaticAberration");
        }
        inline app::ShaderID_VignetteAndChromaticAberration* create() {
            return il2cpp::create_object<app::ShaderID_VignetteAndChromaticAberration>(get_class());
        }
    } // namespace ShaderID_VignetteAndChromaticAberration
} // namespace app::classes::types
