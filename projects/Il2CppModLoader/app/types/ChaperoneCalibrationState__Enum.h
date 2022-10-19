#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChaperoneCalibrationState__Enum {
        namespace {
            inline app::ChaperoneCalibrationState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChaperoneCalibrationState__Enum__Class** type_info = &type_info_ref;
        inline app::ChaperoneCalibrationState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChaperoneCalibrationState__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ChaperoneCalibrationState");
        }
        inline app::ChaperoneCalibrationState__Enum* create() {
            return il2cpp::create_object<app::ChaperoneCalibrationState__Enum>(get_class());
        }
    } // namespace ChaperoneCalibrationState__Enum
} // namespace app::classes::types
