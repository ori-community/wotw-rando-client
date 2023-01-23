#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_50__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_50.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_50 {
        inline app::ShaderID_CameraFilterPack_TV_50__Class** type_info = (app::ShaderID_CameraFilterPack_TV_50__Class**)(modloader::win::memory::resolve_rva(0x04782258));
        inline app::ShaderID_CameraFilterPack_TV_50__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_50__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_50");
        }
        inline app::ShaderID_CameraFilterPack_TV_50* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_50>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_50
} // namespace app::classes::types
