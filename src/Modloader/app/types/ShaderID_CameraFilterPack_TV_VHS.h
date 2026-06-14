#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_VHS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_VHS {
        inline app::ShaderID_CameraFilterPack_TV_VHS__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_VHS__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_VHS__Class**)(modloader::win::memory::resolve_rva(0x04781A40));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_VHS__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_VHS__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_VHS");
        }
        inline app::ShaderID_CameraFilterPack_TV_VHS* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_VHS>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_VHS
} // namespace app::classes::types
