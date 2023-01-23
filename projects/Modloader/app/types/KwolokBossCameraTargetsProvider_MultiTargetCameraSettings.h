#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class.h>
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider_MultiTargetCameraSettings.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings {
        namespace {
            inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class** type_info = &type_info_ref;
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings__Class>(type_info, "", "KwolokBossCameraTargetsProvider", "MultiTargetCameraSettings");
        }
        inline app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider_MultiTargetCameraSettings>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider_MultiTargetCameraSettings
} // namespace app::classes::types
