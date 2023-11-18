#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blizzard.h>
#include <Modloader/app/structs/CameraFilterPack_Blizzard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blizzard {
        inline app::CameraFilterPack_Blizzard__Class** type_info() {
            static app::CameraFilterPack_Blizzard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Blizzard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Blizzard__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blizzard__Class>(type_info(), "", "CameraFilterPack_Blizzard");
        }
        inline app::CameraFilterPack_Blizzard* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blizzard>(get_class());
        }
    } // namespace CameraFilterPack_Blizzard
} // namespace app::classes::types
