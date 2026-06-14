#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Comics.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Comics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Comics {
        inline app::CameraFilterPack_Drawing_Comics__Class** type_info() {
            static app::CameraFilterPack_Drawing_Comics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Comics__Class**)(modloader::win::memory::resolve_rva(0x0473D2A8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Comics__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Comics__Class>(type_info(), "", "CameraFilterPack_Drawing_Comics");
        }
        inline app::CameraFilterPack_Drawing_Comics* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Comics>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Comics
} // namespace app::classes::types
