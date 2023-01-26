#pragma once
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcessingCrossFade_CameraInformation {
        inline app::UberPostProcessingCrossFade_CameraInformation__Class** type_info() {
            static app::UberPostProcessingCrossFade_CameraInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostProcessingCrossFade_CameraInformation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostProcessingCrossFade_CameraInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPostProcessingCrossFade_CameraInformation__Class>(type_info(), "", "UberPostProcessingCrossFade", "CameraInformation");
        }
        inline app::UberPostProcessingCrossFade_CameraInformation* create() {
            return il2cpp::create_object<app::UberPostProcessingCrossFade_CameraInformation>(get_class());
        }
    } // namespace UberPostProcessingCrossFade_CameraInformation
} // namespace app::classes::types
