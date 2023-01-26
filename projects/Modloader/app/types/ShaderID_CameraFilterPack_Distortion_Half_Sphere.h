#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Half_Sphere.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Half_Sphere {
        inline app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class**)(modloader::win::memory::resolve_rva(0x0475EF30));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_Half_Sphere");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Half_Sphere* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Half_Sphere>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Half_Sphere
} // namespace app::classes::types
