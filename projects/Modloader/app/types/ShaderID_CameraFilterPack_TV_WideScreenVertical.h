#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenVertical__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenVertical.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_WideScreenVertical {
        inline app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class** type_info = (app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class**)(modloader::win::memory::resolve_rva(0x0476D520));
        inline app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_WideScreenVertical__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_WideScreenVertical");
        }
        inline app::ShaderID_CameraFilterPack_TV_WideScreenVertical* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_WideScreenVertical>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_WideScreenVertical
} // namespace app::classes::types
