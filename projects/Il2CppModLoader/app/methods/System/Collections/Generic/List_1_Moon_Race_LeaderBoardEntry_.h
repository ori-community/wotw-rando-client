#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_Race_LeaderBoardEntry_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04740E90, List_1_Moon_Race_LeaderBoardEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LeaderBoardEntry *, get_Item, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471D550, List_1_Moon_Race_LeaderBoardEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473AD48, List_1_Moon_Race_LeaderBoardEntry__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BA20, List_1_Moon_Race_LeaderBoardEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, app::LeaderBoardEntry * item))
    IL2CPP_REGISTER_METHODINFO(0x0473C418, List_1_Moon_Race_LeaderBoardEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, app::Comparison_1_Moon_Race_LeaderBoardEntry_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x04781B58, List_1_Moon_Race_LeaderBoardEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047604B0, List_1_Moon_Race_LeaderBoardEntry___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9DF0, app::List_1_Moon_Race_LeaderBoardEntry_ *, GetRange, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04716A08, List_1_Moon_Race_LeaderBoardEntry__GetRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, app::Predicate_1_Moon_Race_LeaderBoardEntry_ * match))
    IL2CPP_REGISTER_METHODINFO(0x04741DF0, List_1_Moon_Race_LeaderBoardEntry__FindIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741920, List_1_Moon_Race_LeaderBoardEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x0470BAD0, List_1_Moon_Race_LeaderBoardEntry__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Race_LeaderBoardEntry_, GetEnumerator, (app::List_1_Moon_Race_LeaderBoardEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793A58, List_1_Moon_Race_LeaderBoardEntry__GetEnumerator__MethodInfo)
}
