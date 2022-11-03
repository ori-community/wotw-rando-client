#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Threshold {
        inline app::CameraFilterPack_Colors_Threshold__Class** type_info = (app::CameraFilterPack_Colors_Threshold__Class**)(modloader::win::memory::resolve_rva(0x04785EE8));
        inline app::CameraFilterPack_Colors_Threshold__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Threshold__Class>(type_info, "", "CameraFilterPack_Colors_Threshold");
        }
        inline app::CameraFilterPack_Colors_Threshold* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Threshold>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Threshold
} // namespace app::classes::types
