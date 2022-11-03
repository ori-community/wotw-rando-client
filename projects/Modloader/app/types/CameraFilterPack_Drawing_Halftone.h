#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Halftone {
        inline app::CameraFilterPack_Drawing_Halftone__Class** type_info = (app::CameraFilterPack_Drawing_Halftone__Class**)(modloader::win::memory::resolve_rva(0x0474FD98));
        inline app::CameraFilterPack_Drawing_Halftone__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Halftone__Class>(type_info, "", "CameraFilterPack_Drawing_Halftone");
        }
        inline app::CameraFilterPack_Drawing_Halftone* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Halftone>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Halftone
} // namespace app::classes::types
