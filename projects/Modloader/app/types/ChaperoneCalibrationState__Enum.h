#pragma once
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum.h>
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChaperoneCalibrationState__Enum {
        inline app::ChaperoneCalibrationState__Enum__Class** type_info() {
            static app::ChaperoneCalibrationState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChaperoneCalibrationState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChaperoneCalibrationState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChaperoneCalibrationState__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "ChaperoneCalibrationState");
        }
        inline app::ChaperoneCalibrationState__Enum* create() {
            return il2cpp::create_object<app::ChaperoneCalibrationState__Enum>(get_class());
        }
    } // namespace ChaperoneCalibrationState__Enum
} // namespace app::classes::types
