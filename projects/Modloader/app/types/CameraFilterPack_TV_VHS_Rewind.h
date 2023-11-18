#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_VHS_Rewind.h>
#include <Modloader/app/structs/CameraFilterPack_TV_VHS_Rewind__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_VHS_Rewind {
        inline app::CameraFilterPack_TV_VHS_Rewind__Class** type_info() {
            static app::CameraFilterPack_TV_VHS_Rewind__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_VHS_Rewind__Class**)(modloader::win::memory::resolve_rva(0x0470EC18));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_VHS_Rewind__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_VHS_Rewind__Class>(type_info(), "", "CameraFilterPack_TV_VHS_Rewind");
        }
        inline app::CameraFilterPack_TV_VHS_Rewind* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_VHS_Rewind>(get_class());
        }
    } // namespace CameraFilterPack_TV_VHS_Rewind
} // namespace app::classes::types
