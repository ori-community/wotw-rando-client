#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Chromatical__Class.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Chromatical.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Chromatical {
        namespace {
            inline app::CameraFilterPack_TV_Chromatical__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_Chromatical__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_Chromatical__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Chromatical__Class>(type_info, "", "CameraFilterPack_TV_Chromatical");
        }
        inline app::CameraFilterPack_TV_Chromatical* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Chromatical>(get_class());
        }
    } // namespace CameraFilterPack_TV_Chromatical
} // namespace app::classes::types
