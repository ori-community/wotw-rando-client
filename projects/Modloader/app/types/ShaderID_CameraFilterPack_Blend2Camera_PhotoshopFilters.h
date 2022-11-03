#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class**)(modloader::win::memory::resolve_rva(0x047282C8));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_PhotoshopFilters
} // namespace app::classes::types
