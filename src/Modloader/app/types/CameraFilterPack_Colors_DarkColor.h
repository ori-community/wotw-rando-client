#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_DarkColor.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_DarkColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_DarkColor {
        inline app::CameraFilterPack_Colors_DarkColor__Class** type_info() {
            static app::CameraFilterPack_Colors_DarkColor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_DarkColor__Class**)(modloader::win::memory::resolve_rva(0x04744C58));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_DarkColor__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_DarkColor__Class>(type_info(), "", "CameraFilterPack_Colors_DarkColor");
        }
        inline app::CameraFilterPack_Colors_DarkColor* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_DarkColor>(get_class());
        }
    } // namespace CameraFilterPack_Colors_DarkColor
} // namespace app::classes::types
