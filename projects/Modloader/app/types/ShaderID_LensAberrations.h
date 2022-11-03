#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_LensAberrations {
        inline app::ShaderID_LensAberrations__Class** type_info = (app::ShaderID_LensAberrations__Class**)(modloader::win::memory::resolve_rva(0x04782AF8));
        inline app::ShaderID_LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LensAberrations__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_LensAberrations");
        }
        inline app::ShaderID_LensAberrations* create() {
            return il2cpp::create_object<app::ShaderID_LensAberrations>(get_class());
        }
    } // namespace ShaderID_LensAberrations
} // namespace app::classes::types
