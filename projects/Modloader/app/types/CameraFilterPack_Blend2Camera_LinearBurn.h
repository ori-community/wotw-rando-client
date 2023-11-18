#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LinearBurn.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_LinearBurn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_LinearBurn {
        inline app::CameraFilterPack_Blend2Camera_LinearBurn__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_LinearBurn__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blend2Camera_LinearBurn__Class**)(modloader::win::memory::resolve_rva(0x04775418));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_LinearBurn__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_LinearBurn__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_LinearBurn");
        }
        inline app::CameraFilterPack_Blend2Camera_LinearBurn* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_LinearBurn>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_LinearBurn
} // namespace app::classes::types
