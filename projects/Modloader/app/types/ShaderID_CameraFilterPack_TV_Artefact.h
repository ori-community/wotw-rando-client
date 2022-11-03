#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Artefact {
        inline app::ShaderID_CameraFilterPack_TV_Artefact__Class** type_info = (app::ShaderID_CameraFilterPack_TV_Artefact__Class**)(modloader::win::memory::resolve_rva(0x04768FE8));
        inline app::ShaderID_CameraFilterPack_TV_Artefact__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Artefact__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_Artefact");
        }
        inline app::ShaderID_CameraFilterPack_TV_Artefact* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Artefact>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Artefact
} // namespace app::classes::types
