#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04777750, Comparison_1_Moon_UberStateVisualization_UberStateData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B8DDC0, int32_t, Invoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::UberStateData x, app::UberStateData y))
    IL2CPP_REGISTER_METHOD(0x02B8E770, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::UberStateData x, app::UberStateData y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_UberStateVisualization_UberStateData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Moon_UberStateVisualization_UberStateData_
