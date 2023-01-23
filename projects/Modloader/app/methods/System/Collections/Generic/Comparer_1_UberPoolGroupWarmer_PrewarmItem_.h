#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/Comparison_1_UberPoolGroupWarmer_PrewarmItem_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_UberPoolGroupWarmer_PrewarmItem_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_UberPoolGroupWarmer_PrewarmItem_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x028CCF80, app::Comparer_1_UberPoolGroupWarmer_PrewarmItem_*, Create, (app::Comparison_1_UberPoolGroupWarmer_PrewarmItem_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04703A60, Comparer_1_UberPoolGroupWarmer_PrewarmItem__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028CD180, app::Comparer_1_UberPoolGroupWarmer_PrewarmItem_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_UberPoolGroupWarmer_PrewarmItem_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_UberPoolGroupWarmer_PrewarmItem_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_UberPoolGroupWarmer_PrewarmItem_
