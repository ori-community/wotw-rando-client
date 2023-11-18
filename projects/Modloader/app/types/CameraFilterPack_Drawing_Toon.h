#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Toon.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Toon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Toon {
        inline app::CameraFilterPack_Drawing_Toon__Class** type_info() {
            static app::CameraFilterPack_Drawing_Toon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Toon__Class**)(modloader::win::memory::resolve_rva(0x04791140));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Toon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Toon__Class>(type_info(), "", "CameraFilterPack_Drawing_Toon");
        }
        inline app::CameraFilterPack_Drawing_Toon* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Toon>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Toon
} // namespace app::classes::types
