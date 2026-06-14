#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Focus.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Focus__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Focus {
        inline app::ShaderID_CameraFilterPack_Blur_Focus__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Focus__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Focus__Class**)(modloader::win::memory::resolve_rva(0x0475A4C0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Focus__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Focus__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Focus");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Focus* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Focus>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Focus
} // namespace app::classes::types
