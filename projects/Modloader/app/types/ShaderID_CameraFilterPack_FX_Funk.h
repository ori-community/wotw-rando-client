#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Funk.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_Funk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Funk {
        inline app::ShaderID_CameraFilterPack_FX_Funk__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_Funk__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_Funk__Class**)(modloader::win::memory::resolve_rva(0x04733550));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_Funk__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Funk__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_Funk");
        }
        inline app::ShaderID_CameraFilterPack_FX_Funk* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Funk>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Funk
} // namespace app::classes::types
