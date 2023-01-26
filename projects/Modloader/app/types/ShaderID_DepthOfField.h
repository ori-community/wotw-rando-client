#pragma once
#include <Modloader/app/structs/ShaderID_DepthOfField.h>
#include <Modloader/app/structs/ShaderID_DepthOfField__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfField {
        inline app::ShaderID_DepthOfField__Class** type_info() {
            static app::ShaderID_DepthOfField__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DepthOfField__Class**)(modloader::win::memory::resolve_rva(0x0472DE78));
            }
            return cache;
        }
        inline app::ShaderID_DepthOfField__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfField__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfField");
        }
        inline app::ShaderID_DepthOfField* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfField>(get_class());
        }
    } // namespace ShaderID_DepthOfField
} // namespace app::classes::types
