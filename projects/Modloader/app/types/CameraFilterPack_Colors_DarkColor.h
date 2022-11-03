#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_DarkColor {
        inline app::CameraFilterPack_Colors_DarkColor__Class** type_info = (app::CameraFilterPack_Colors_DarkColor__Class**)(modloader::win::memory::resolve_rva(0x04744C58));
        inline app::CameraFilterPack_Colors_DarkColor__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_DarkColor__Class>(type_info, "", "CameraFilterPack_Colors_DarkColor");
        }
        inline app::CameraFilterPack_Colors_DarkColor* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_DarkColor>(get_class());
        }
    } // namespace CameraFilterPack_Colors_DarkColor
} // namespace app::classes::types
