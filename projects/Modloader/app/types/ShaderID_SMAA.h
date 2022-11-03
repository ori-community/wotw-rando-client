#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SMAA {
        inline app::ShaderID_SMAA__Class** type_info = (app::ShaderID_SMAA__Class**)(modloader::win::memory::resolve_rva(0x04764140));
        inline app::ShaderID_SMAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_SMAA");
        }
        inline app::ShaderID_SMAA* create() {
            return il2cpp::create_object<app::ShaderID_SMAA>(get_class());
        }
    } // namespace ShaderID_SMAA
} // namespace app::classes::types
