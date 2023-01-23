#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_DepthOfFieldDeprecated__Class.h>
#include <Modloader/app/structs/ShaderID_DepthOfFieldDeprecated.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfFieldDeprecated {
        inline app::ShaderID_DepthOfFieldDeprecated__Class** type_info = (app::ShaderID_DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x04798EB8));
        inline app::ShaderID_DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfFieldDeprecated__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfFieldDeprecated");
        }
        inline app::ShaderID_DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfFieldDeprecated>(get_class());
        }
    } // namespace ShaderID_DepthOfFieldDeprecated
} // namespace app::classes::types
