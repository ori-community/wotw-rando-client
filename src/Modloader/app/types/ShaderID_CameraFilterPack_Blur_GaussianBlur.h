#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_GaussianBlur.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_GaussianBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_GaussianBlur {
        inline app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class**)(modloader::win::memory::resolve_rva(0x04789968));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_GaussianBlur__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_GaussianBlur");
        }
        inline app::ShaderID_CameraFilterPack_Blur_GaussianBlur* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_GaussianBlur>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_GaussianBlur
} // namespace app::classes::types
