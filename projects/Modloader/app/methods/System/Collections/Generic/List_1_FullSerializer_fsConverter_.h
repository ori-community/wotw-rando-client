#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_FullSerializer_fsConverter_.h>
#include <Modloader/app/structs/fsConverter.h>

namespace app::classes::System::Collections::Generic::List_1_FullSerializer_fsConverter_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_FullSerializer_fsConverter_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738C70, List_1_FullSerializer_fsConverter___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_FullSerializer_fsConverter_ * this_ptr, app::fsConverter* item))
    IL2CPP_REGISTER_METHODINFO(0x0476DAE8, List_1_FullSerializer_fsConverter__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, (app::List_1_FullSerializer_fsConverter_ * this_ptr, int32_t index, app::fsConverter* item))
    IL2CPP_REGISTER_METHODINFO(0x047490B0, List_1_FullSerializer_fsConverter__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::fsConverter*, get_Item, (app::List_1_FullSerializer_fsConverter_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471FB00, List_1_FullSerializer_fsConverter__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_FullSerializer_fsConverter_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706D70, List_1_FullSerializer_fsConverter__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_FullSerializer_fsConverter_
