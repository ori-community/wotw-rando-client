#pragma once
#include <Modloader/app/structs/CameraSettings_AnimateJobData.h>
#include <Modloader/app/structs/CameraSettings_AnimateJobData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettings_AnimateJobData {
        inline app::CameraSettings_AnimateJobData__Class** type_info() {
            static app::CameraSettings_AnimateJobData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraSettings_AnimateJobData__Class**)(modloader::win::memory::resolve_rva(0x04763788));
            }
            return cache;
        }
        inline app::CameraSettings_AnimateJobData__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettings_AnimateJobData__Class>(type_info(), "", "CameraSettings", "AnimateJobData");
        }
        inline app::CameraSettings_AnimateJobData* create() {
            return il2cpp::create_object<app::CameraSettings_AnimateJobData>(get_class());
        }
    } // namespace CameraSettings_AnimateJobData
} // namespace app::classes::types
