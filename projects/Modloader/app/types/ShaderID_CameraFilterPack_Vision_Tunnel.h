#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Tunnel__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_Tunnel.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_Tunnel {
        inline app::ShaderID_CameraFilterPack_Vision_Tunnel__Class** type_info = (app::ShaderID_CameraFilterPack_Vision_Tunnel__Class**)(modloader::win::memory::resolve_rva(0x04733C88));
        inline app::ShaderID_CameraFilterPack_Vision_Tunnel__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_Tunnel__Class>(type_info, "", "ShaderID_CameraFilterPack_Vision_Tunnel");
        }
        inline app::ShaderID_CameraFilterPack_Vision_Tunnel* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_Tunnel>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_Tunnel
} // namespace app::classes::types
