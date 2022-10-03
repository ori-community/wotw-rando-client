#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_BrokenGlass2 {
        namespace {
            app::CameraFilterPack_TV_BrokenGlass2__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_TV_BrokenGlass2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_BrokenGlass2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_BrokenGlass2__Class>(type_info, "", "CameraFilterPack_TV_BrokenGlass2");
        }
        inline app::CameraFilterPack_TV_BrokenGlass2* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_BrokenGlass2>(get_class());
        }
    } // namespace CameraFilterPack_TV_BrokenGlass2
} // namespace app::classes::types
