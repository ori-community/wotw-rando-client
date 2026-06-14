#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Vcr.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Vcr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Vcr {
        inline app::CameraFilterPack_TV_Vcr__Class** type_info() {
            static app::CameraFilterPack_TV_Vcr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Vcr__Class**)(modloader::win::memory::resolve_rva(0x047770B0));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Vcr__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Vcr__Class>(type_info(), "", "CameraFilterPack_TV_Vcr");
        }
        inline app::CameraFilterPack_TV_Vcr* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Vcr>(get_class());
        }
    } // namespace CameraFilterPack_TV_Vcr
} // namespace app::classes::types
