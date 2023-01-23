#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RespawningPlaceholder.h>
#include <Modloader/app/structs/List_1_RespawningPlaceholder_.h>

namespace app::classes::System::Collections::Generic::List_1_RespawningPlaceholder_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RespawningPlaceholder*, get_Item, (app::List_1_RespawningPlaceholder_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04745AC8, List_1_RespawningPlaceholder__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RespawningPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738A30, List_1_RespawningPlaceholder__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RespawningPlaceholder_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DEE8, List_1_RespawningPlaceholder___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RespawningPlaceholder_ * this_ptr, app::RespawningPlaceholder* item))
    IL2CPP_REGISTER_METHODINFO(0x0475C7B8, List_1_RespawningPlaceholder__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_RespawningPlaceholder_ * this_ptr, app::RespawningPlaceholder* item))
    IL2CPP_REGISTER_METHODINFO(0x047968D8, List_1_RespawningPlaceholder__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RespawningPlaceholder_
