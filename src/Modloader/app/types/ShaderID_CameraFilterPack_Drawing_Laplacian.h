#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Laplacian.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Laplacian__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Laplacian {
        inline app::ShaderID_CameraFilterPack_Drawing_Laplacian__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Laplacian__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Laplacian__Class**)(modloader::win::memory::resolve_rva(0x0477C570));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Laplacian__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Laplacian__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Laplacian");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Laplacian* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Laplacian>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Laplacian
} // namespace app::classes::types
