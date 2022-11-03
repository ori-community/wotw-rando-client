#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenHorizontal {
        inline app::CameraFilterPack_TV_WideScreenHorizontal__Class** type_info = (app::CameraFilterPack_TV_WideScreenHorizontal__Class**)(modloader::win::memory::resolve_rva(0x04794A80));
        inline app::CameraFilterPack_TV_WideScreenHorizontal__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenHorizontal__Class>(type_info, "", "CameraFilterPack_TV_WideScreenHorizontal");
        }
        inline app::CameraFilterPack_TV_WideScreenHorizontal* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenHorizontal>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenHorizontal
} // namespace app::classes::types
