#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_AmbientOcclusion__Class.h>
#include <Modloader/app/structs/ShaderID_AmbientOcclusion.h>

namespace app::classes::types {
    namespace ShaderID_AmbientOcclusion {
        inline app::ShaderID_AmbientOcclusion__Class** type_info = (app::ShaderID_AmbientOcclusion__Class**)(modloader::win::memory::resolve_rva(0x047957F8));
        inline app::ShaderID_AmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AmbientOcclusion__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_AmbientOcclusion");
        }
        inline app::ShaderID_AmbientOcclusion* create() {
            return il2cpp::create_object<app::ShaderID_AmbientOcclusion>(get_class());
        }
    } // namespace ShaderID_AmbientOcclusion
} // namespace app::classes::types
