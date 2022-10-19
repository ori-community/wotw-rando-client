#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Hell_Blood {
        inline app::CameraFilterPack_Vision_Hell_Blood__Class** type_info = (app::CameraFilterPack_Vision_Hell_Blood__Class**)(modloader::win::memory::resolve_rva(0x04754DF0));
        inline app::CameraFilterPack_Vision_Hell_Blood__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Hell_Blood__Class>(type_info, "", "CameraFilterPack_Vision_Hell_Blood");
        }
        inline app::CameraFilterPack_Vision_Hell_Blood* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Hell_Blood>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Hell_Blood
} // namespace app::classes::types
