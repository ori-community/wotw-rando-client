#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Glitch1 {
        inline app::CameraFilterPack_FX_Glitch1__Class** type_info = (app::CameraFilterPack_FX_Glitch1__Class**)(modloader::win::memory::resolve_rva(0x047677D0));
        inline app::CameraFilterPack_FX_Glitch1__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Glitch1__Class>(type_info, "", "CameraFilterPack_FX_Glitch1");
        }
        inline app::CameraFilterPack_FX_Glitch1* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Glitch1>(get_class());
        }
    } // namespace CameraFilterPack_FX_Glitch1
} // namespace app::classes::types
