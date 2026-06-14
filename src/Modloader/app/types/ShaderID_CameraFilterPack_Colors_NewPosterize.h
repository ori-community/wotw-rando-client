#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_NewPosterize.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_NewPosterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_NewPosterize {
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class**)(modloader::win::memory::resolve_rva(0x047751D0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_NewPosterize__Class>(type_info(), "", "ShaderID_CameraFilterPack_Colors_NewPosterize");
        }
        inline app::ShaderID_CameraFilterPack_Colors_NewPosterize* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_NewPosterize>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_NewPosterize
} // namespace app::classes::types
