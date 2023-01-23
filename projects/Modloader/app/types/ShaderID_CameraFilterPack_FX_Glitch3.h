#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Glitch3__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Glitch3.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Glitch3 {
        inline app::ShaderID_CameraFilterPack_FX_Glitch3__Class** type_info = (app::ShaderID_CameraFilterPack_FX_Glitch3__Class**)(modloader::win::memory::resolve_rva(0x04769C10));
        inline app::ShaderID_CameraFilterPack_FX_Glitch3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Glitch3__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_Glitch3");
        }
        inline app::ShaderID_CameraFilterPack_FX_Glitch3* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Glitch3>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Glitch3
} // namespace app::classes::types
