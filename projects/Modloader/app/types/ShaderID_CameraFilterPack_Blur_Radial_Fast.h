#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Radial_Fast__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Radial_Fast.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Radial_Fast {
        inline app::ShaderID_CameraFilterPack_Blur_Radial_Fast__Class** type_info = (app::ShaderID_CameraFilterPack_Blur_Radial_Fast__Class**)(modloader::win::memory::resolve_rva(0x0477A918));
        inline app::ShaderID_CameraFilterPack_Blur_Radial_Fast__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Radial_Fast__Class>(type_info, "", "ShaderID_CameraFilterPack_Blur_Radial_Fast");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Radial_Fast* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Radial_Fast>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Radial_Fast
} // namespace app::classes::types
