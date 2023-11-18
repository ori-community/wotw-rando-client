#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_Steam.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Steam__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Steam {
        inline app::CameraFilterPack_Blur_Steam__Class** type_info() {
            static app::CameraFilterPack_Blur_Steam__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_Steam__Class**)(modloader::win::memory::resolve_rva(0x047587C0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_Steam__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Steam__Class>(type_info(), "", "CameraFilterPack_Blur_Steam");
        }
        inline app::CameraFilterPack_Blur_Steam* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Steam>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Steam
} // namespace app::classes::types
