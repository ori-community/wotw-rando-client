#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Scan__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Scan.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Scan {
        inline app::ShaderID_CameraFilterPack_FX_Scan__Class** type_info = (app::ShaderID_CameraFilterPack_FX_Scan__Class**)(modloader::win::memory::resolve_rva(0x047231C8));
        inline app::ShaderID_CameraFilterPack_FX_Scan__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Scan__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_Scan");
        }
        inline app::ShaderID_CameraFilterPack_FX_Scan* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Scan>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Scan
} // namespace app::classes::types
