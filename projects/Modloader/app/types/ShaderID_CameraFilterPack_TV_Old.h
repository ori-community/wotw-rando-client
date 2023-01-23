#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Old__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_Old.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_Old {
        inline app::ShaderID_CameraFilterPack_TV_Old__Class** type_info = (app::ShaderID_CameraFilterPack_TV_Old__Class**)(modloader::win::memory::resolve_rva(0x04722BF8));
        inline app::ShaderID_CameraFilterPack_TV_Old__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_Old__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_Old");
        }
        inline app::ShaderID_CameraFilterPack_TV_Old* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_Old>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_Old
} // namespace app::classes::types
