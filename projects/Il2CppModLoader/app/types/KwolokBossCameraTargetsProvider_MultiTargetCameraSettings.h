#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings {
        namespace {
            app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* type_info_ref = nullptr;
        }
        app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class** type_info = &type_info_ref;
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class>(type_info, "", "KwolokBossCameraTargetsProvider", "MultiTargetCameraSettings");
        }
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings
} // namespace app::classes::types
