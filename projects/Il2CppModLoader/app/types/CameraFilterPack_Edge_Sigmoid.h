#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Sigmoid {
        inline app::CameraFilterPack_Edge_Sigmoid__Class** type_info = (app::CameraFilterPack_Edge_Sigmoid__Class**)(modloader::win::memory::resolve_rva(0x0471A880));
        inline app::CameraFilterPack_Edge_Sigmoid__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Sigmoid__Class>(type_info, "", "CameraFilterPack_Edge_Sigmoid");
        }
        inline app::CameraFilterPack_Edge_Sigmoid* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Sigmoid>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Sigmoid
} // namespace app::classes::types
