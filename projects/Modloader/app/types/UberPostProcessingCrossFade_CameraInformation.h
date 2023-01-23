#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation__Class.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation.h>

namespace app::classes::types {
    namespace UberPostProcessingCrossFade_CameraInformation {
        namespace {
            inline app::UberPostProcessingCrossFade_CameraInformation__Class* type_info_ref = nullptr;
        }
        inline app::UberPostProcessingCrossFade_CameraInformation__Class** type_info = &type_info_ref;
        inline app::UberPostProcessingCrossFade_CameraInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPostProcessingCrossFade_CameraInformation__Class>(type_info, "", "UberPostProcessingCrossFade", "CameraInformation");
        }
        inline app::UberPostProcessingCrossFade_CameraInformation* create() {
            return il2cpp::create_object<app::UberPostProcessingCrossFade_CameraInformation>(get_class());
        }
    } // namespace UberPostProcessingCrossFade_CameraInformation
} // namespace app::classes::types
