#pragma once
#include <Modloader/app/structs/CameraFilterPack_Edge_Sigmoid.h>
#include <Modloader/app/structs/CameraFilterPack_Edge_Sigmoid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Sigmoid {
        inline app::CameraFilterPack_Edge_Sigmoid__Class** type_info() {
            static app::CameraFilterPack_Edge_Sigmoid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Edge_Sigmoid__Class**)(modloader::win::memory::resolve_rva(0x0471A880));
            }
            return cache;
        }
        inline app::CameraFilterPack_Edge_Sigmoid__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Sigmoid__Class>(type_info(), "", "CameraFilterPack_Edge_Sigmoid");
        }
        inline app::CameraFilterPack_Edge_Sigmoid* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Sigmoid>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Sigmoid
} // namespace app::classes::types
