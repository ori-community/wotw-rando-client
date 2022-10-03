#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPostProcessingCrossFade_CameraInformation {
        namespace {
            app::UberPostProcessingCrossFade_CameraInformation__Class* type_info_ref = nullptr;
        }
        app::UberPostProcessingCrossFade_CameraInformation__Class** type_info = &type_info_ref;
        inline app::UberPostProcessingCrossFade_CameraInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPostProcessingCrossFade_CameraInformation__Class>(type_info, "", "UberPostProcessingCrossFade", "CameraInformation");
        }
        inline app::UberPostProcessingCrossFade_CameraInformation* create() {
            return il2cpp::create_object<app::UberPostProcessingCrossFade_CameraInformation>(get_class());
        }
    } // namespace UberPostProcessingCrossFade_CameraInformation
} // namespace app::classes::types
