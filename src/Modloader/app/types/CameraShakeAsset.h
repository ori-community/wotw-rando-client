#pragma once
#include <Modloader/app/structs/CameraShakeAsset.h>
#include <Modloader/app/structs/CameraShakeAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShakeAsset {
        inline app::CameraShakeAsset__Class** type_info() {
            static app::CameraShakeAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraShakeAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraShakeAsset__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAsset__Class>(type_info(), "", "CameraShakeAsset");
        }
        inline app::CameraShakeAsset* create() {
            return il2cpp::create_object<app::CameraShakeAsset>(get_class());
        }
    } // namespace CameraShakeAsset
} // namespace app::classes::types
