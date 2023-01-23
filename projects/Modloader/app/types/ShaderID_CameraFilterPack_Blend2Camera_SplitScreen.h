#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_SplitScreen.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_SplitScreen {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class**)(modloader::win::memory::resolve_rva(0x047387A8));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_SplitScreen");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_SplitScreen>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_SplitScreen
} // namespace app::classes::types
