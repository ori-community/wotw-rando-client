#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_VHS {
        inline app::CameraFilterPack_TV_VHS__Class** type_info = (app::CameraFilterPack_TV_VHS__Class**)(modloader::win::memory::resolve_rva(0x04772D30));
        inline app::CameraFilterPack_TV_VHS__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_VHS__Class>(type_info, "", "CameraFilterPack_TV_VHS");
        }
        inline app::CameraFilterPack_TV_VHS* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_VHS>(get_class());
        }
    } // namespace CameraFilterPack_TV_VHS
} // namespace app::classes::types
