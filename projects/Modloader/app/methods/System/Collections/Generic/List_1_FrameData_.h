#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_FrameData_.h>
#include <Modloader/app/structs/FrameData_1.h>
#include <Modloader/app/structs/List_1_T_Enumerator_FrameData_.h>

namespace app::classes::System::Collections::Generic::List_1_FrameData_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_FrameData_ * this_ptr, app::FrameData_1* item))
    IL2CPP_REGISTER_METHODINFO(0x047166D8, List_1_FrameData__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_FrameData_ * this_ptr, int32_t index, app::FrameData_1* item))
    IL2CPP_REGISTER_METHODINFO(0x047496D8, List_1_FrameData__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::FrameData_1*, get_Item, (app::List_1_FrameData_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04742A40, List_1_FrameData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_FrameData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717900, List_1_FrameData__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_FrameData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A6B8, List_1_FrameData__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_FrameData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720298, List_1_FrameData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_FrameData_, GetEnumerator, (app::List_1_FrameData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774108, List_1_FrameData__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_FrameData_
