#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_YUV.h>
#include <Modloader/app/structs/CameraFilterPack_Color_YUV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_YUV {
        inline app::CameraFilterPack_Color_YUV__Class** type_info() {
            static app::CameraFilterPack_Color_YUV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Color_YUV__Class**)(modloader::win::memory::resolve_rva(0x04754D70));
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_YUV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_YUV__Class>(type_info(), "", "CameraFilterPack_Color_YUV");
        }
        inline app::CameraFilterPack_Color_YUV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_YUV>(get_class());
        }
    } // namespace CameraFilterPack_Color_YUV
} // namespace app::classes::types
