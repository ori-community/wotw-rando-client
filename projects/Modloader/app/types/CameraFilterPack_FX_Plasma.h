#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Plasma {
        inline app::CameraFilterPack_FX_Plasma__Class** type_info = (app::CameraFilterPack_FX_Plasma__Class**)(modloader::win::memory::resolve_rva(0x04732118));
        inline app::CameraFilterPack_FX_Plasma__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Plasma__Class>(type_info, "", "CameraFilterPack_FX_Plasma");
        }
        inline app::CameraFilterPack_FX_Plasma* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Plasma>(get_class());
        }
    } // namespace CameraFilterPack_FX_Plasma
} // namespace app::classes::types
