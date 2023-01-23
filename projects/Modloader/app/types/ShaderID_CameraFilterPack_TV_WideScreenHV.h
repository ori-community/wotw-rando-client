#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenHV__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_TV_WideScreenHV.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_WideScreenHV {
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class** type_info = (app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class**)(modloader::win::memory::resolve_rva(0x0476A2B8));
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_WideScreenHV__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_WideScreenHV");
        }
        inline app::ShaderID_CameraFilterPack_TV_WideScreenHV* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_WideScreenHV>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_WideScreenHV
} // namespace app::classes::types
