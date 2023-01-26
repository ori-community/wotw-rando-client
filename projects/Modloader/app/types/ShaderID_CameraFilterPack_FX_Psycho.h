#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Psycho.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Psycho__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Psycho {
        inline app::ShaderID_CameraFilterPack_FX_Psycho__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Psycho__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Psycho__Class**)(modloader::win::memory::resolve_rva(0x04726F08));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Psycho__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Psycho__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Psycho");
        }
        inline app::ShaderID_CameraFilterPack_FX_Psycho* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Psycho>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Psycho
} // namespace app::classes::types
