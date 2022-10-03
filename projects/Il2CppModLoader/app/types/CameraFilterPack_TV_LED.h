#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_LED {
        namespace {
            app::CameraFilterPack_TV_LED__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_TV_LED__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_LED__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_LED__Class>(type_info, "", "CameraFilterPack_TV_LED");
        }
        inline app::CameraFilterPack_TV_LED* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_LED>(get_class());
        }
    } // namespace CameraFilterPack_TV_LED
} // namespace app::classes::types
