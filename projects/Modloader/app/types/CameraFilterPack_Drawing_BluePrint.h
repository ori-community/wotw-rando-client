#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_BluePrint.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_BluePrint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_BluePrint {
        inline app::CameraFilterPack_Drawing_BluePrint__Class** type_info() {
            static app::CameraFilterPack_Drawing_BluePrint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Drawing_BluePrint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_BluePrint__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_BluePrint__Class>(type_info(), "", "CameraFilterPack_Drawing_BluePrint");
        }
        inline app::CameraFilterPack_Drawing_BluePrint* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_BluePrint>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_BluePrint
} // namespace app::classes::types
