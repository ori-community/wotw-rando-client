#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Regular {
        inline app::CameraFilterPack_Blur_Regular__Class** type_info = (app::CameraFilterPack_Blur_Regular__Class**)(modloader::win::memory::resolve_rva(0x047945B8));
        inline app::CameraFilterPack_Blur_Regular__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Regular__Class>(type_info, "", "CameraFilterPack_Blur_Regular");
        }
        inline app::CameraFilterPack_Blur_Regular* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Regular>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Regular
} // namespace app::classes::types
