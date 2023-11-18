#pragma once
#include <Modloader/app/structs/CameraFilterPack_Glitch_Mozaic.h>
#include <Modloader/app/structs/CameraFilterPack_Glitch_Mozaic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Glitch_Mozaic {
        inline app::CameraFilterPack_Glitch_Mozaic__Class** type_info() {
            static app::CameraFilterPack_Glitch_Mozaic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Glitch_Mozaic__Class**)(modloader::win::memory::resolve_rva(0x04764FC8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Glitch_Mozaic__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Glitch_Mozaic__Class>(type_info(), "", "CameraFilterPack_Glitch_Mozaic");
        }
        inline app::CameraFilterPack_Glitch_Mozaic* create() {
            return il2cpp::create_object<app::CameraFilterPack_Glitch_Mozaic>(get_class());
        }
    } // namespace CameraFilterPack_Glitch_Mozaic
} // namespace app::classes::types
