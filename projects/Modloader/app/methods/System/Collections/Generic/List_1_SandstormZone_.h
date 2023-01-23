#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SandstormZone_.h>
#include <Modloader/app/structs/SandstormZone.h>

namespace app::classes::System::Collections::Generic::List_1_SandstormZone_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SandstormZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F510, List_1_SandstormZone___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SandstormZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744578, List_1_SandstormZone__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SandstormZone*, get_Item, (app::List_1_SandstormZone_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474E640, List_1_SandstormZone__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SandstormZone_ * this_ptr, app::SandstormZone* item))
    IL2CPP_REGISTER_METHODINFO(0x04764B58, List_1_SandstormZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SandstormZone_ * this_ptr, app::SandstormZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0474E210, List_1_SandstormZone__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SandstormZone_
