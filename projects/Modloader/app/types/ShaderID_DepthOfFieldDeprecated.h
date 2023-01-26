#pragma once
#include <Modloader/app/structs/ShaderID_DepthOfFieldDeprecated.h>
#include <Modloader/app/structs/ShaderID_DepthOfFieldDeprecated__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfFieldDeprecated {
        inline app::ShaderID_DepthOfFieldDeprecated__Class** type_info() {
            static app::ShaderID_DepthOfFieldDeprecated__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x04798EB8));
            }
            return cache;
        }
        inline app::ShaderID_DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfFieldDeprecated__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfFieldDeprecated");
        }
        inline app::ShaderID_DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfFieldDeprecated>(get_class());
        }
    } // namespace ShaderID_DepthOfFieldDeprecated
} // namespace app::classes::types
