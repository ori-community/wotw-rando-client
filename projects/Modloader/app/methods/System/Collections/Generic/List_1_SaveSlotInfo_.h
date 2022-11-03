#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_SaveSlotInfo_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SaveSlotInfo*, get_Item, (app::List_1_SaveSlotInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476AC98, List_1_SaveSlotInfo__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SaveSlotInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725778, List_1_SaveSlotInfo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_SaveSlotInfo_ * this_ptr, int32_t index, app::SaveSlotInfo* value))
    IL2CPP_REGISTER_METHODINFO(0x0476B658, List_1_SaveSlotInfo__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SaveSlotInfo_ * this_ptr, app::SaveSlotInfo* item))
    IL2CPP_REGISTER_METHODINFO(0x04731A90, List_1_SaveSlotInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SaveSlotInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713DF8, List_1_SaveSlotInfo__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SaveSlotInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784220, List_1_SaveSlotInfo___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SaveSlotInfo_
