#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_WaterDrop.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_WaterDrop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_WaterDrop {
        inline app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class** type_info() {
            static app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class**)(modloader::win::memory::resolve_rva(0x04731B30));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_WaterDrop__Class>(type_info(), "", "ShaderID_CameraFilterPack_AAA_WaterDrop");
        }
        inline app::ShaderID_CameraFilterPack_AAA_WaterDrop* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_WaterDrop>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_WaterDrop
} // namespace app::classes::types
