#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_HSV__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_HSV.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_HSV {
        inline app::ShaderID_CameraFilterPack_Colors_HSV__Class** type_info = (app::ShaderID_CameraFilterPack_Colors_HSV__Class**)(modloader::win::memory::resolve_rva(0x0475CE48));
        inline app::ShaderID_CameraFilterPack_Colors_HSV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_HSV__Class>(type_info, "", "ShaderID_CameraFilterPack_Colors_HSV");
        }
        inline app::ShaderID_CameraFilterPack_Colors_HSV* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_HSV>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_HSV
} // namespace app::classes::types
