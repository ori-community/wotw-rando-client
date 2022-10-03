#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_MixerSnapshot_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_MixerSnapshot_ * this_ptr, app::MixerSnapshot* item))
    IL2CPP_REGISTER_METHODINFO(0x0477A8A8, List_1_MixerSnapshot__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MixerSnapshot_ * this_ptr, app::MixerSnapshot* item))
    IL2CPP_REGISTER_METHODINFO(0x04773610, List_1_MixerSnapshot__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MixerSnapshot*, get_Item, (app::List_1_MixerSnapshot_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473D2A0, List_1_MixerSnapshot__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_MixerSnapshot_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761860, List_1_MixerSnapshot__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_MixerSnapshot_ * this_ptr, app::Predicate_1_MixerSnapshot_* match))
    IL2CPP_REGISTER_METHODINFO(0x04774B30, List_1_MixerSnapshot__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_MixerSnapshot_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0474E840, List_1_MixerSnapshot___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_MixerSnapshot_
