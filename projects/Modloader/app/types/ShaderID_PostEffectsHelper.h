#pragma once
#include <Modloader/app/structs/ShaderID_PostEffectsHelper.h>
#include <Modloader/app/structs/ShaderID_PostEffectsHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PostEffectsHelper {
        inline app::ShaderID_PostEffectsHelper__Class** type_info() {
            static app::ShaderID_PostEffectsHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_PostEffectsHelper__Class**)(modloader::win::memory::resolve_rva(0x04746AB8));
            }
            return cache;
        }
        inline app::ShaderID_PostEffectsHelper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PostEffectsHelper__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_PostEffectsHelper");
        }
        inline app::ShaderID_PostEffectsHelper* create() {
            return il2cpp::create_object<app::ShaderID_PostEffectsHelper>(get_class());
        }
    } // namespace ShaderID_PostEffectsHelper
} // namespace app::classes::types
