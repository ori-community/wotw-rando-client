#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Posterize.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Posterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Posterize {
        inline app::CameraFilterPack_TV_Posterize__Class** type_info() {
            static app::CameraFilterPack_TV_Posterize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Posterize__Class**)(modloader::win::memory::resolve_rva(0x04795D68));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Posterize__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Posterize__Class>(type_info(), "", "CameraFilterPack_TV_Posterize");
        }
        inline app::CameraFilterPack_TV_Posterize* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Posterize>(get_class());
        }
    } // namespace CameraFilterPack_TV_Posterize
} // namespace app::classes::types
