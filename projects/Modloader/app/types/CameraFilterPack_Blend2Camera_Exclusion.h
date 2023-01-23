#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Exclusion__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Exclusion.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Exclusion {
        inline app::CameraFilterPack_Blend2Camera_Exclusion__Class** type_info = (app::CameraFilterPack_Blend2Camera_Exclusion__Class**)(modloader::win::memory::resolve_rva(0x0474CC48));
        inline app::CameraFilterPack_Blend2Camera_Exclusion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Exclusion__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Exclusion");
        }
        inline app::CameraFilterPack_Blend2Camera_Exclusion* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Exclusion>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Exclusion
} // namespace app::classes::types
