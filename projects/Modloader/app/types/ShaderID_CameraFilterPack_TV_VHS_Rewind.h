#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS_Rewind.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS_Rewind__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_VHS_Rewind {
        inline app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class**)(modloader::win::memory::resolve_rva(0x04728270));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_VHS_Rewind__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_VHS_Rewind");
        }
        inline app::ShaderID_CameraFilterPack_TV_VHS_Rewind* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_VHS_Rewind>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_VHS_Rewind
} // namespace app::classes::types
