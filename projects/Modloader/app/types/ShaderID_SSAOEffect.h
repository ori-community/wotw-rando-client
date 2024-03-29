#pragma once
#include <Modloader/app/structs/ShaderID_SSAOEffect.h>
#include <Modloader/app/structs/ShaderID_SSAOEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SSAOEffect {
        inline app::ShaderID_SSAOEffect__Class** type_info() {
            static app::ShaderID_SSAOEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SSAOEffect__Class**)(modloader::win::memory::resolve_rva(0x04736470));
            }
            return cache;
        }
        inline app::ShaderID_SSAOEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SSAOEffect__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_SSAOEffect");
        }
        inline app::ShaderID_SSAOEffect* create() {
            return il2cpp::create_object<app::ShaderID_SSAOEffect>(get_class());
        }
    } // namespace ShaderID_SSAOEffect
} // namespace app::classes::types
