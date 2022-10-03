#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRChaperone_GetCalibrationState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRChaperone_GetCalibrationState__Class** type_info;
        inline app::IVRChaperone_GetCalibrationState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRChaperone_GetCalibrationState__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRChaperone", "_GetCalibrationState");
        }
        inline app::IVRChaperone_GetCalibrationState* create() {
            return il2cpp::create_object<app::IVRChaperone_GetCalibrationState>(get_class());
        }
    } // namespace IVRChaperone_GetCalibrationState
} // namespace app::classes::types
