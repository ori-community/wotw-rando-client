#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_DitherOffset.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_DitherOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_DitherOffset {
        inline app::CameraFilterPack_Blur_DitherOffset__Class** type_info() {
            static app::CameraFilterPack_Blur_DitherOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_DitherOffset__Class**)(modloader::win::memory::resolve_rva(0x04772F40));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_DitherOffset__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_DitherOffset__Class>(type_info(), "", "CameraFilterPack_Blur_DitherOffset");
        }
        inline app::CameraFilterPack_Blur_DitherOffset* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_DitherOffset>(get_class());
        }
    } // namespace CameraFilterPack_Blur_DitherOffset
} // namespace app::classes::types
