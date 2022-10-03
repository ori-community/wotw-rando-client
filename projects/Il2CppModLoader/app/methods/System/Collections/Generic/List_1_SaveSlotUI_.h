#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_SaveSlotUI_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SaveSlotUI_ * this_ptr, app::SaveSlotUI* item))
    IL2CPP_REGISTER_METHODINFO(0x04788F30, List_1_SaveSlotUI__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047266A8, List_1_SaveSlotUI__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SaveSlotUI*, get_Item, (app::List_1_SaveSlotUI_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470DC08, List_1_SaveSlotUI__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_SaveSlotUI_ * this_ptr, int32_t index, app::SaveSlotUI* value))
    IL2CPP_REGISTER_METHODINFO(0x04745510, List_1_SaveSlotUI__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SaveSlotUI_, GetEnumerator, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708780, List_1_SaveSlotUI__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SaveSlotUI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E150, List_1_SaveSlotUI___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, (app::List_1_SaveSlotUI_ * this_ptr, app::Predicate_1_SaveSlotUI_* match))
    IL2CPP_REGISTER_METHODINFO(0x04719B10, List_1_SaveSlotUI__FindIndex__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SaveSlotUI_
