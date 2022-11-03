#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Bloom {
        inline app::ShaderID_Bloom__Class** type_info = (app::ShaderID_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04711720));
        inline app::ShaderID_Bloom__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Bloom__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_Bloom");
        }
        inline app::ShaderID_Bloom* create() {
            return il2cpp::create_object<app::ShaderID_Bloom>(get_class());
        }
    } // namespace ShaderID_Bloom
} // namespace app::classes::types
