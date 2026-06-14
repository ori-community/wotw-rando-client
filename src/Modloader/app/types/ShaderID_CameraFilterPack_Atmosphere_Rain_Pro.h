#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Atmosphere_Rain_Pro.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Atmosphere_Rain_Pro {
        inline app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class**)(modloader::win::memory::resolve_rva(0x0474FE60));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro__Class>(type_info(), "", "ShaderID_CameraFilterPack_Atmosphere_Rain_Pro");
        }
        inline app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Atmosphere_Rain_Pro>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Atmosphere_Rain_Pro
} // namespace app::classes::types
