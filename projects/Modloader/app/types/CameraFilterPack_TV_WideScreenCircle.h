#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenCircle.h>
#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenCircle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_WideScreenCircle {
        inline app::CameraFilterPack_TV_WideScreenCircle__Class** type_info() {
            static app::CameraFilterPack_TV_WideScreenCircle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_WideScreenCircle__Class**)(modloader::win::memory::resolve_rva(0x04710A88));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_WideScreenCircle__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_WideScreenCircle__Class>(type_info(), "", "CameraFilterPack_TV_WideScreenCircle");
        }
        inline app::CameraFilterPack_TV_WideScreenCircle* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_WideScreenCircle>(get_class());
        }
    } // namespace CameraFilterPack_TV_WideScreenCircle
} // namespace app::classes::types
