#pragma once
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_Blood {
        inline app::CameraFilterPack_AAA_Blood__Class** type_info() {
            static app::CameraFilterPack_AAA_Blood__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_AAA_Blood__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_AAA_Blood__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_Blood__Class>(type_info(), "", "CameraFilterPack_AAA_Blood");
        }
        inline app::CameraFilterPack_AAA_Blood* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_Blood>(get_class());
        }
    } // namespace CameraFilterPack_AAA_Blood
} // namespace app::classes::types
