#pragma once
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood_Hit.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood_Hit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_Blood_Hit {
        inline app::CameraFilterPack_AAA_Blood_Hit__Class** type_info() {
            static app::CameraFilterPack_AAA_Blood_Hit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_AAA_Blood_Hit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_AAA_Blood_Hit__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_Blood_Hit__Class>(type_info(), "", "CameraFilterPack_AAA_Blood_Hit");
        }
        inline app::CameraFilterPack_AAA_Blood_Hit* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_Blood_Hit>(get_class());
        }
    } // namespace CameraFilterPack_AAA_Blood_Hit
} // namespace app::classes::types
