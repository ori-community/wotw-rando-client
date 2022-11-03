#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderKeyword_SMAA {
        inline app::ShaderKeyword_SMAA__Class** type_info = (app::ShaderKeyword_SMAA__Class**)(modloader::win::memory::resolve_rva(0x04749250));
        inline app::ShaderKeyword_SMAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderKeyword_SMAA");
        }
        inline app::ShaderKeyword_SMAA* create() {
            return il2cpp::create_object<app::ShaderKeyword_SMAA>(get_class());
        }
    } // namespace ShaderKeyword_SMAA
} // namespace app::classes::types
