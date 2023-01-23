#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Radial__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Radial.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Radial {
        inline app::CameraFilterPack_Blur_Radial__Class** type_info = (app::CameraFilterPack_Blur_Radial__Class**)(modloader::win::memory::resolve_rva(0x0474A260));
        inline app::CameraFilterPack_Blur_Radial__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Radial__Class>(type_info, "", "CameraFilterPack_Blur_Radial");
        }
        inline app::CameraFilterPack_Blur_Radial* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Radial>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Radial
} // namespace app::classes::types
