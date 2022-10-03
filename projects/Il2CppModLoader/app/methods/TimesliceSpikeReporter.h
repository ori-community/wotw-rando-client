#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TimesliceSpikeReporter {
    IL2CPP_REGISTER_METHOD(0x00AF5B90, app::GUIStyle*, get_LabelStyle, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF5F00, app::TimesliceSpikeReporter*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00AF5FA0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00AF6070, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00AF6280, void, EnsureImgui, (app::TimesliceSpikeReporter * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x00AF6370, void, Awake, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF6560, void, OnDestroy, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF6750, void, OnBudgetExceeded, (app::TimesliceSpikeReporter * this_ptr, app::ITimeSlicedJob* job, float budget, float time))
    IL2CPP_REGISTER_METHODINFO(0x047808F8, TimesliceSpikeReporter_OnBudgetExceeded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AF6AD0, void, Update, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF6BE0, void, OnGUI, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF6FA0, void, ctor, (app::TimesliceSpikeReporter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF7100, void, cctor, ())
} // namespace app::classes::TimesliceSpikeReporter
