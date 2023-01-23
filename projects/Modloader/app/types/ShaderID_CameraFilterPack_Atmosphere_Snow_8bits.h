#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Atmosphere_Snow_8bits.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Atmosphere_Snow_8bits {
        inline app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class** type_info = (app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class**)(modloader::win::memory::resolve_rva(0x0477CA78));
        inline app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits__Class>(type_info, "", "ShaderID_CameraFilterPack_Atmosphere_Snow_8bits");
        }
        inline app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Atmosphere_Snow_8bits>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Atmosphere_Snow_8bits
} // namespace app::classes::types
