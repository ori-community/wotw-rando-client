#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_SoftLight__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_SoftLight.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_SoftLight {
        inline app::CameraFilterPack_Blend2Camera_SoftLight__Class** type_info = (app::CameraFilterPack_Blend2Camera_SoftLight__Class**)(modloader::win::memory::resolve_rva(0x04739D98));
        inline app::CameraFilterPack_Blend2Camera_SoftLight__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_SoftLight__Class>(type_info, "", "CameraFilterPack_Blend2Camera_SoftLight");
        }
        inline app::CameraFilterPack_Blend2Camera_SoftLight* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_SoftLight>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_SoftLight
} // namespace app::classes::types
