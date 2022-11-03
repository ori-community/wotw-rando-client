#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Spot {
        inline app::ShaderID_CameraFilterPack_FX_Spot__Class** type_info = (app::ShaderID_CameraFilterPack_FX_Spot__Class**)(modloader::win::memory::resolve_rva(0x04713D70));
        inline app::ShaderID_CameraFilterPack_FX_Spot__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Spot__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_Spot");
        }
        inline app::ShaderID_CameraFilterPack_FX_Spot* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Spot>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Spot
} // namespace app::classes::types
