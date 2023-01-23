#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenHorizontal.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_WideScreenHorizontal {
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class** type_info = (app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class**)(modloader::win::memory::resolve_rva(0x04791298));
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_WideScreenHorizontal");
        }
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_WideScreenHorizontal>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_WideScreenHorizontal
} // namespace app::classes::types
