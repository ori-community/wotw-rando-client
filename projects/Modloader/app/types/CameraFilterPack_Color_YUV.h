#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Color_YUV__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Color_YUV.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_YUV {
        inline app::CameraFilterPack_Color_YUV__Class** type_info = (app::CameraFilterPack_Color_YUV__Class**)(modloader::win::memory::resolve_rva(0x04754D70));
        inline app::CameraFilterPack_Color_YUV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_YUV__Class>(type_info, "", "CameraFilterPack_Color_YUV");
        }
        inline app::CameraFilterPack_Color_YUV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_YUV>(get_class());
        }
    } // namespace CameraFilterPack_Color_YUV
} // namespace app::classes::types
