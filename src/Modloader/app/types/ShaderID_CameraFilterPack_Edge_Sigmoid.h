#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Sigmoid.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Sigmoid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_Sigmoid {
        inline app::ShaderID_CameraFilterPack_Edge_Sigmoid__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Edge_Sigmoid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Edge_Sigmoid__Class**)(modloader::win::memory::resolve_rva(0x047958D8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Edge_Sigmoid__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_Sigmoid__Class>(type_info(), "", "ShaderID_CameraFilterPack_Edge_Sigmoid");
        }
        inline app::ShaderID_CameraFilterPack_Edge_Sigmoid* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_Sigmoid>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_Sigmoid
} // namespace app::classes::types
