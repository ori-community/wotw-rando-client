#pragma once
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_MultiTargetCameraSettings.h>
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings {
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class** type_info() {
            static app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class>(type_info(), "", "KwolokBossCameraTargetsProvider", "MultiTargetCameraSettings");
        }
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings
} // namespace app::classes::types
