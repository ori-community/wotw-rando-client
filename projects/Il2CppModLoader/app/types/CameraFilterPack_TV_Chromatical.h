#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Chromatical {
        namespace {
            app::CameraFilterPack_TV_Chromatical__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_TV_Chromatical__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_Chromatical__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Chromatical__Class>(type_info, "", "CameraFilterPack_TV_Chromatical");
        }
        inline app::CameraFilterPack_TV_Chromatical* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Chromatical>(get_class());
        }
    } // namespace CameraFilterPack_TV_Chromatical
} // namespace app::classes::types
