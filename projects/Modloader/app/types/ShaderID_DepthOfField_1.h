#pragma once
#include <Modloader/app/structs/ShaderID_DepthOfField_1.h>
#include <Modloader/app/structs/ShaderID_DepthOfField_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfField_1 {
        inline app::ShaderID_DepthOfField_1__Class** type_info() {
            static app::ShaderID_DepthOfField_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DepthOfField_1__Class**)(modloader::win::memory::resolve_rva(0x047087D0));
            }
            return cache;
        }
        inline app::ShaderID_DepthOfField_1__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfField_1__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderID_DepthOfField");
        }
        inline app::ShaderID_DepthOfField_1* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfField_1>(get_class());
        }
    } // namespace ShaderID_DepthOfField_1
} // namespace app::classes::types
