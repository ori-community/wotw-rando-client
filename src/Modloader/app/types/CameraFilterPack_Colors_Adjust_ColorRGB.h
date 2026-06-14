#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_ColorRGB.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_ColorRGB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Adjust_ColorRGB {
        inline app::CameraFilterPack_Colors_Adjust_ColorRGB__Class** type_info() {
            static app::CameraFilterPack_Colors_Adjust_ColorRGB__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_Adjust_ColorRGB__Class**)(modloader::win::memory::resolve_rva(0x04712E50));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_Adjust_ColorRGB__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Adjust_ColorRGB__Class>(type_info(), "", "CameraFilterPack_Colors_Adjust_ColorRGB");
        }
        inline app::CameraFilterPack_Colors_Adjust_ColorRGB* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Adjust_ColorRGB>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Adjust_ColorRGB
} // namespace app::classes::types
