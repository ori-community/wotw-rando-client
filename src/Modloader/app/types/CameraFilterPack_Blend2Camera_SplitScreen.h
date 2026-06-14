#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_SplitScreen.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_SplitScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_SplitScreen {
        inline app::CameraFilterPack_Blend2Camera_SplitScreen__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_SplitScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_SplitScreen__Class**)(modloader::win::memory::resolve_rva(0x0478CA98));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_SplitScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_SplitScreen__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_SplitScreen");
        }
        inline app::CameraFilterPack_Blend2Camera_SplitScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_SplitScreen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_SplitScreen
} // namespace app::classes::types
