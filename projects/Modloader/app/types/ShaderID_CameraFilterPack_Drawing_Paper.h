#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Paper.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Paper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Paper {
        inline app::ShaderID_CameraFilterPack_Drawing_Paper__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Paper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Paper__Class**)(modloader::win::memory::resolve_rva(0x047723A8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Paper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Paper__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Paper");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Paper* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Paper>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Paper
} // namespace app::classes::types
