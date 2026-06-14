#pragma once
#include <Modloader/app/structs/IVRChaperone_GetCalibrationState.h>
#include <Modloader/app/structs/IVRChaperone_GetCalibrationState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetCalibrationState {
        inline app::IVRChaperone_GetCalibrationState__Class** type_info() {
            static app::IVRChaperone_GetCalibrationState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRChaperone_GetCalibrationState__Class**)(modloader::win::memory::resolve_rva(0x04771828));
            }
            return cache;
        }
        inline app::IVRChaperone_GetCalibrationState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetCalibrationState__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetCalibrationState");
        }
        inline app::IVRChaperone_GetCalibrationState* create() {
            return il2cpp::create_object<app::IVRChaperone_GetCalibrationState>(get_class());
        }
    } // namespace IVRChaperone_GetCalibrationState
} // namespace app::classes::types
