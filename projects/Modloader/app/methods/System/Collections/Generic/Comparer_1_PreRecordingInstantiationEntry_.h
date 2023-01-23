#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_PreRecordingInstantiationEntry_.h>
#include <Modloader/app/structs/Comparison_1_PreRecordingInstantiationEntry_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_PreRecordingInstantiationEntry_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_PreRecordingInstantiationEntry_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02821E20, app::Comparer_1_PreRecordingInstantiationEntry_*, Create, (app::Comparison_1_PreRecordingInstantiationEntry_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0477F9C0, Comparer_1_PreRecordingInstantiationEntry__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02822020, app::Comparer_1_PreRecordingInstantiationEntry_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_PreRecordingInstantiationEntry_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_PreRecordingInstantiationEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_PreRecordingInstantiationEntry_
