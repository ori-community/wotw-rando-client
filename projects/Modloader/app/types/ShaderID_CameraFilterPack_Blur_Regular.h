#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Regular.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Regular__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Regular {
        inline app::ShaderID_CameraFilterPack_Blur_Regular__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Regular__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Regular__Class**)(modloader::win::memory::resolve_rva(0x0478F298));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Regular__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Regular__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Regular");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Regular* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Regular>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Regular
} // namespace app::classes::types
