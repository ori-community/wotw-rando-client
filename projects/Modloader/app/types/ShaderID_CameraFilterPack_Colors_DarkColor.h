#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_DarkColor__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Colors_DarkColor.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Colors_DarkColor {
        inline app::ShaderID_CameraFilterPack_Colors_DarkColor__Class** type_info = (app::ShaderID_CameraFilterPack_Colors_DarkColor__Class**)(modloader::win::memory::resolve_rva(0x04727528));
        inline app::ShaderID_CameraFilterPack_Colors_DarkColor__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Colors_DarkColor__Class>(type_info, "", "ShaderID_CameraFilterPack_Colors_DarkColor");
        }
        inline app::ShaderID_CameraFilterPack_Colors_DarkColor* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Colors_DarkColor>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Colors_DarkColor
} // namespace app::classes::types
