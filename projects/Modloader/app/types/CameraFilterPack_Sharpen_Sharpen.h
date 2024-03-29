#pragma once
#include <Modloader/app/structs/CameraFilterPack_Sharpen_Sharpen.h>
#include <Modloader/app/structs/CameraFilterPack_Sharpen_Sharpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Sharpen_Sharpen {
        inline app::CameraFilterPack_Sharpen_Sharpen__Class** type_info() {
            static app::CameraFilterPack_Sharpen_Sharpen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Sharpen_Sharpen__Class**)(modloader::win::memory::resolve_rva(0x04790F78));
            }
            return cache;
        }
        inline app::CameraFilterPack_Sharpen_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Sharpen_Sharpen__Class>(type_info(), "", "CameraFilterPack_Sharpen_Sharpen");
        }
        inline app::CameraFilterPack_Sharpen_Sharpen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Sharpen_Sharpen>(get_class());
        }
    } // namespace CameraFilterPack_Sharpen_Sharpen
} // namespace app::classes::types
