#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Tonemapping {
        inline app::ShaderID_Tonemapping__Class** type_info = (app::ShaderID_Tonemapping__Class**)(modloader::win::memory::resolve_rva(0x0479A0B8));
        inline app::ShaderID_Tonemapping__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Tonemapping__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_Tonemapping");
        }
        inline app::ShaderID_Tonemapping* create() {
            return il2cpp::create_object<app::ShaderID_Tonemapping>(get_class());
        }
    } // namespace ShaderID_Tonemapping
} // namespace app::classes::types
