#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Halftone__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Halftone.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Halftone {
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Halftone__Class**)(modloader::win::memory::resolve_rva(0x047620B8));
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Halftone__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Halftone");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Halftone* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Halftone>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Halftone
} // namespace app::classes::types
