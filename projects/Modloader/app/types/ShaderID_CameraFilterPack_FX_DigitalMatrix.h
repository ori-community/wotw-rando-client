#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_DigitalMatrix.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_DigitalMatrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_DigitalMatrix {
        inline app::ShaderID_CameraFilterPack_FX_DigitalMatrix__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_DigitalMatrix__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_DigitalMatrix__Class**)(modloader::win::memory::resolve_rva(0x0473B208));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_DigitalMatrix__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_DigitalMatrix__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_DigitalMatrix");
        }
        inline app::ShaderID_CameraFilterPack_FX_DigitalMatrix* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_DigitalMatrix>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_DigitalMatrix
} // namespace app::classes::types
