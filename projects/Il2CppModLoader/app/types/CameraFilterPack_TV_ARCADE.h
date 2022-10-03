#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_ARCADE {
        namespace {
            app::CameraFilterPack_TV_ARCADE__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_TV_ARCADE__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_ARCADE__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_ARCADE__Class>(type_info, "", "CameraFilterPack_TV_ARCADE");
        }
        inline app::CameraFilterPack_TV_ARCADE* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_ARCADE>(get_class());
        }
    } // namespace CameraFilterPack_TV_ARCADE
} // namespace app::classes::types
