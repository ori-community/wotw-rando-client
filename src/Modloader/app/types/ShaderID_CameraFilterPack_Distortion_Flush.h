#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Flush.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Flush__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Flush {
        inline app::ShaderID_CameraFilterPack_Distortion_Flush__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_Flush__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_Flush__Class**)(modloader::win::memory::resolve_rva(0x04704178));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Flush__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Flush__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_Flush");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Flush* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Flush>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Flush
} // namespace app::classes::types
