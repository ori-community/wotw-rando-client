#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_BlackLine.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_BlackLine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_BlackLine {
        inline app::ShaderID_CameraFilterPack_Edge_BlackLine__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Edge_BlackLine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Edge_BlackLine__Class**)(modloader::win::memory::resolve_rva(0x0472F350));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Edge_BlackLine__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_BlackLine__Class>(type_info(), "", "ShaderID_CameraFilterPack_Edge_BlackLine");
        }
        inline app::ShaderID_CameraFilterPack_Edge_BlackLine* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_BlackLine>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_BlackLine
} // namespace app::classes::types
