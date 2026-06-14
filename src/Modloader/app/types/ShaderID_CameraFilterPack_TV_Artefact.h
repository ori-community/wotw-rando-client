#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Artefact.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Artefact__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Artefact {
        inline app::ShaderID_CameraFilterPack_TV_Artefact__Class** type_info() {
            static app::ShaderID_CameraFilterPack_TV_Artefact__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_TV_Artefact__Class**)(modloader::win::memory::resolve_rva(0x04768FE8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_TV_Artefact__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Artefact__Class>(type_info(), "", "ShaderID_CameraFilterPack_TV_Artefact");
        }
        inline app::ShaderID_CameraFilterPack_TV_Artefact* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Artefact>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Artefact
} // namespace app::classes::types
