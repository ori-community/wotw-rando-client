#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Sharpen_Sharpen__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Sharpen_Sharpen.h>

namespace app::classes::types {
    namespace CameraFilterPack_Sharpen_Sharpen {
        inline app::CameraFilterPack_Sharpen_Sharpen__Class** type_info = (app::CameraFilterPack_Sharpen_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x04790F78));
        inline app::CameraFilterPack_Sharpen_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Sharpen_Sharpen__Class>(type_info, "", "CameraFilterPack_Sharpen_Sharpen");
        }
        inline app::CameraFilterPack_Sharpen_Sharpen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Sharpen_Sharpen>(get_class());
        }
    } // namespace CameraFilterPack_Sharpen_Sharpen
} // namespace app::classes::types
