#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_Regular.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Regular__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Regular {
        inline app::CameraFilterPack_Blur_Regular__Class** type_info() {
            static app::CameraFilterPack_Blur_Regular__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_Regular__Class**)(modloader::win::memory::resolve_rva(0x047945B8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_Regular__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Regular__Class>(type_info(), "", "CameraFilterPack_Blur_Regular");
        }
        inline app::CameraFilterPack_Blur_Regular* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Regular>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Regular
} // namespace app::classes::types
