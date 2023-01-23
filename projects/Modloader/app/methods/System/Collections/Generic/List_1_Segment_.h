#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Segment_.h>
#include <Modloader/app/structs/Segment_1.h>

namespace app::classes::System::Collections::Generic::List_1_Segment_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Segment_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756C78, List_1_Segment__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Segment_ * this_ptr, app::Segment_1* item))
    IL2CPP_REGISTER_METHODINFO(0x0471FB88, List_1_Segment__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Segment_ * this_ptr, app::Segment_1* item))
    IL2CPP_REGISTER_METHODINFO(0x04774CD8, List_1_Segment__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Segment_1*, get_Item, (app::List_1_Segment_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04765C98, List_1_Segment__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Segment_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796268, List_1_Segment__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Segment_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047256E0, List_1_Segment___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Segment_
