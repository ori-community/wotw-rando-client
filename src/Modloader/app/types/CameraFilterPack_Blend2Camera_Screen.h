#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Screen.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Screen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Screen {
        inline app::CameraFilterPack_Blend2Camera_Screen__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_Screen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_Screen__Class**)(modloader::win::memory::resolve_rva(0x0473E350));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_Screen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Screen__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_Screen");
        }
        inline app::CameraFilterPack_Blend2Camera_Screen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Screen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Screen
} // namespace app::classes::types
