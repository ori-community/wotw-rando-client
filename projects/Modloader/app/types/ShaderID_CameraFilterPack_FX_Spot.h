#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Spot.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Spot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Spot {
        inline app::ShaderID_CameraFilterPack_FX_Spot__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Spot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Spot__Class**)(modloader::win::memory::resolve_rva(0x04713D70));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Spot__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Spot__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Spot");
        }
        inline app::ShaderID_CameraFilterPack_FX_Spot* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Spot>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Spot
} // namespace app::classes::types
