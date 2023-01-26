#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Subtract.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Subtract__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Subtract {
        inline app::CameraFilterPack_Blend2Camera_Subtract__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Subtract__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Subtract__Class**)(modloader::win::memory::resolve_rva(0x04756670));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Subtract__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Subtract__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Subtract");
        }
        inline app::CameraFilterPack_Blend2Camera_Subtract* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Subtract>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Subtract
} // namespace app::classes::types
