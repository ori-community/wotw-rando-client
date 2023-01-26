#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Blend.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Blend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Blend {
        inline app::CameraFilterPack_Blend2Camera_Blend__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Blend__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Blend__Class**)(modloader::win::memory::resolve_rva(0x0477D210));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Blend__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Blend__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Blend");
        }
        inline app::CameraFilterPack_Blend2Camera_Blend* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Blend>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Blend
} // namespace app::classes::types
