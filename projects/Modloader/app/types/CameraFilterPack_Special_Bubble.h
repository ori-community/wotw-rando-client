#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Special_Bubble {
        inline app::CameraFilterPack_Special_Bubble__Class** type_info = (app::CameraFilterPack_Special_Bubble__Class**)(modloader::win::memory::resolve_rva(0x0473AEF0));
        inline app::CameraFilterPack_Special_Bubble__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Special_Bubble__Class>(type_info, "", "CameraFilterPack_Special_Bubble");
        }
        inline app::CameraFilterPack_Special_Bubble* create() {
            return il2cpp::create_object<app::CameraFilterPack_Special_Bubble>(get_class());
        }
    } // namespace CameraFilterPack_Special_Bubble
} // namespace app::classes::types
