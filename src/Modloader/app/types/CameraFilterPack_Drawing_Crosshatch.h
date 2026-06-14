#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Crosshatch.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Crosshatch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Crosshatch {
        inline app::CameraFilterPack_Drawing_Crosshatch__Class** type_info() {
            static app::CameraFilterPack_Drawing_Crosshatch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Crosshatch__Class**)(modloader::win::memory::resolve_rva(0x047293D8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Crosshatch__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Crosshatch__Class>(type_info(), "", "CameraFilterPack_Drawing_Crosshatch");
        }
        inline app::CameraFilterPack_Drawing_Crosshatch* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Crosshatch>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Crosshatch
} // namespace app::classes::types
