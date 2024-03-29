#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Drunk.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Drunk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Drunk {
        inline app::ShaderID_CameraFilterPack_FX_Drunk__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Drunk__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Drunk__Class**)(modloader::win::memory::resolve_rva(0x04762B20));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Drunk__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Drunk__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Drunk");
        }
        inline app::ShaderID_CameraFilterPack_FX_Drunk* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Drunk>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Drunk
} // namespace app::classes::types
