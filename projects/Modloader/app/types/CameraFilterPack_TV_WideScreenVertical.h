#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenVertical__Class.h>
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenVertical.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenVertical {
        inline app::CameraFilterPack_TV_WideScreenVertical__Class** type_info = (app::CameraFilterPack_TV_WideScreenVertical__Class**)(modloader::win::memory::resolve_rva(0x04792C88));
        inline app::CameraFilterPack_TV_WideScreenVertical__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenVertical__Class>(type_info, "", "CameraFilterPack_TV_WideScreenVertical");
        }
        inline app::CameraFilterPack_TV_WideScreenVertical* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenVertical>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenVertical
} // namespace app::classes::types
