#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_HSV.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_HSV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_HSV {
        inline app::CameraFilterPack_Colors_HSV__Class** type_info() {
            static app::CameraFilterPack_Colors_HSV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_HSV__Class**)(modloader::win::memory::resolve_rva(0x0477E948));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_HSV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_HSV__Class>(type_info(), "", "CameraFilterPack_Colors_HSV");
        }
        inline app::CameraFilterPack_Colors_HSV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_HSV>(get_class());
        }
    } // namespace CameraFilterPack_Colors_HSV
} // namespace app::classes::types
