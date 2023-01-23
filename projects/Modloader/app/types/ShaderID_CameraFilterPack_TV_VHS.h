#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_VHS {
        inline app::ShaderID_CameraFilterPack_TV_VHS__Class** type_info = (app::ShaderID_CameraFilterPack_TV_VHS__Class**)(modloader::win::memory::resolve_rva(0x04781A40));
        inline app::ShaderID_CameraFilterPack_TV_VHS__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_VHS__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_VHS");
        }
        inline app::ShaderID_CameraFilterPack_TV_VHS* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_VHS>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_VHS
} // namespace app::classes::types
