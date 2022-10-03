#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Lines {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Lines__Class** type_info;
        inline app::CameraFilterPack_Drawing_Lines__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Lines__Class>(type_info, "", "CameraFilterPack_Drawing_Lines");
        }
        inline app::CameraFilterPack_Drawing_Lines* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Lines>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Lines
} // namespace app::classes::types
