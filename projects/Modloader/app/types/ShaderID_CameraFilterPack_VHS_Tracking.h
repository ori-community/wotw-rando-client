#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_VHS_Tracking__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_VHS_Tracking.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_VHS_Tracking {
        inline app::ShaderID_CameraFilterPack_VHS_Tracking__Class** type_info = (app::ShaderID_CameraFilterPack_VHS_Tracking__Class**)(modloader::win::memory::resolve_rva(0x047810F8));
        inline app::ShaderID_CameraFilterPack_VHS_Tracking__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_VHS_Tracking__Class>(type_info, "", "ShaderID_CameraFilterPack_VHS_Tracking");
        }
        inline app::ShaderID_CameraFilterPack_VHS_Tracking* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_VHS_Tracking>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_VHS_Tracking
} // namespace app::classes::types
