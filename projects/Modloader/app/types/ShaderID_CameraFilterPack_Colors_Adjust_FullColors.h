#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_Adjust_FullColors.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_Adjust_FullColors {
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class**)(modloader::win::memory::resolve_rva(0x04761DE0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors__Class>(type_info(), "", "ShaderID_CameraFilterPack_Colors_Adjust_FullColors");
        }
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_Adjust_FullColors>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_Adjust_FullColors
} // namespace app::classes::types
