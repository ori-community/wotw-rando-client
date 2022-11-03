#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenCircle {
        inline app::CameraFilterPack_TV_WideScreenCircle__Class** type_info = (app::CameraFilterPack_TV_WideScreenCircle__Class**)(modloader::win::memory::resolve_rva(0x04710A88));
        inline app::CameraFilterPack_TV_WideScreenCircle__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenCircle__Class>(type_info, "", "CameraFilterPack_TV_WideScreenCircle");
        }
        inline app::CameraFilterPack_TV_WideScreenCircle* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenCircle>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenCircle
} // namespace app::classes::types
