#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Golden.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Golden__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_Golden {
        inline app::ShaderID_CameraFilterPack_Edge_Golden__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Edge_Golden__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Edge_Golden__Class**)(modloader::win::memory::resolve_rva(0x04740BF8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Edge_Golden__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_Golden__Class>(type_info(), "", "ShaderID_CameraFilterPack_Edge_Golden");
        }
        inline app::ShaderID_CameraFilterPack_Edge_Golden* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_Golden>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_Golden
} // namespace app::classes::types
