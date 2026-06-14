#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Halftone.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Halftone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Halftone {
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Halftone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Halftone__Class**)(modloader::win::memory::resolve_rva(0x047620B8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Halftone__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Halftone");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Halftone>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Halftone
} // namespace app::classes::types
