#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_Adjust_PreFilters.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_Adjust_PreFilters {
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class**)(modloader::win::memory::resolve_rva(0x0470FBA8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters__Class>(type_info(), "", "ShaderID_CameraFilterPack_Colors_Adjust_PreFilters");
        }
        inline app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_Adjust_PreFilters>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_Adjust_PreFilters
} // namespace app::classes::types
