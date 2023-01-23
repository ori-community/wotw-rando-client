#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_DarkerColor__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_DarkerColor.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_DarkerColor {
        inline app::CameraFilterPack_Blend2Camera_DarkerColor__Class** type_info = (app::CameraFilterPack_Blend2Camera_DarkerColor__Class**)(modloader::win::memory::resolve_rva(0x04795BB0));
        inline app::CameraFilterPack_Blend2Camera_DarkerColor__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_DarkerColor__Class>(type_info, "", "CameraFilterPack_Blend2Camera_DarkerColor");
        }
        inline app::CameraFilterPack_Blend2Camera_DarkerColor* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_DarkerColor>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_DarkerColor
} // namespace app::classes::types
