#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_80 {
        namespace {
            inline app::CameraFilterPack_TV_80__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_80__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_80__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_80__Class>(type_info, "", "CameraFilterPack_TV_80");
        }
        inline app::CameraFilterPack_TV_80* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_80>(get_class());
        }
    } // namespace CameraFilterPack_TV_80
} // namespace app::classes::types
