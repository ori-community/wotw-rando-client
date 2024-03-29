#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Mirror.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Mirror__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Mirror {
        inline app::ShaderID_CameraFilterPack_FX_Mirror__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Mirror__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Mirror__Class**)(modloader::win::memory::resolve_rva(0x047957E8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Mirror__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Mirror__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Mirror");
        }
        inline app::ShaderID_CameraFilterPack_FX_Mirror* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Mirror>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Mirror
} // namespace app::classes::types
