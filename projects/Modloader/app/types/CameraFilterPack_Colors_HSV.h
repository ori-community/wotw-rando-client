#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_HSV {
        inline app::CameraFilterPack_Colors_HSV__Class** type_info = (app::CameraFilterPack_Colors_HSV__Class**)(modloader::win::memory::resolve_rva(0x0477E948));
        inline app::CameraFilterPack_Colors_HSV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_HSV__Class>(type_info, "", "CameraFilterPack_Colors_HSV");
        }
        inline app::CameraFilterPack_Colors_HSV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_HSV>(get_class());
        }
    } // namespace CameraFilterPack_Colors_HSV
} // namespace app::classes::types
