#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Rgb {
        namespace {
            inline app::CameraFilterPack_TV_Rgb__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_Rgb__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_Rgb__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Rgb__Class>(type_info, "", "CameraFilterPack_TV_Rgb");
        }
        inline app::CameraFilterPack_TV_Rgb* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Rgb>(get_class());
        }
    } // namespace CameraFilterPack_TV_Rgb
} // namespace app::classes::types
