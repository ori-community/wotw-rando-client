#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::frameworks::Switch::ControllerVibrationSetting {
    IL2CPP_REGISTER_METHOD(0x001215B0, bool, Equals_1, (app::ControllerVibrationSetting__Boxed * this_ptr, app::ControllerVibrationSetting other))
    IL2CPP_REGISTER_METHOD(0x001215D0, bool, Equals_2, (app::ControllerVibrationSetting__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x001216B0, int32_t, GetHashCode, (app::ControllerVibrationSetting__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor, (app::ControllerVibrationSetting__Boxed * this_ptr, float left, float right, float left_trigger, float right_trigger))
    IL2CPP_REGISTER_METHOD(0x00121760, app::String *, ToString, (app::ControllerVibrationSetting__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F59F50, bool, op_Equality, (app::ControllerVibrationSetting a, app::ControllerVibrationSetting b))
    IL2CPP_REGISTER_METHOD(0x00F59F70, bool, op_Inequality, (app::ControllerVibrationSetting a, app::ControllerVibrationSetting b))
    IL2CPP_REGISTER_METHOD(0x00F59F90, void, cctor, ())
    inline bool operator == (app::ControllerVibrationSetting a, app::ControllerVibrationSetting b) {
        return op_Equality(a, b);
    }
    inline bool operator != (app::ControllerVibrationSetting a, app::ControllerVibrationSetting b) {
        return op_Inequality(a, b);
    }
}
