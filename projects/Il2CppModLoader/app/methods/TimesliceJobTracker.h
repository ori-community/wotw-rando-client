#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimesliceJobTracker {
    IL2CPP_REGISTER_METHOD(0x00AF3960, app::String *, get_TestName, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF39E0, void, StartTest, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF3F40, void, StopTest, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateTest, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF4260, app::String *, CollectData, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF43E0, app::String *, get_CSVHeader, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::TestTagHelper_TestTypeTag__Enum, get_Tag, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF4460, void, DumpFile, (app::TimesliceJobTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF4850, void, OnSliceExecute, (app::TimesliceJobTracker * this_ptr, app::SliceExecutionStats stats))
    IL2CPP_REGISTER_METHODINFO(0x04745188, TimesliceJobTracker_OnSliceExecute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00AF4A70, void, OnReportOverhadPeak, (app::TimesliceJobTracker * this_ptr, double duration))
    IL2CPP_REGISTER_METHODINFO(0x047235B0, TimesliceJobTracker_OnReportOverhadPeak__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimesliceJobTracker * this_ptr))
}
