#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_GhostPlayer_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_GhostPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747248, List_1_GhostPlayer__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GhostPlayer*, get_Item, (app::List_1_GhostPlayer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476B090, List_1_GhostPlayer__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_GhostPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047979D8, List_1_GhostPlayer__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_GhostPlayer_ * this_ptr, app::GhostPlayer* item))
    IL2CPP_REGISTER_METHODINFO(0x0471BC18, List_1_GhostPlayer__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_GhostPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A318, List_1_GhostPlayer___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::GhostPlayer__Array*, ToArray, (app::List_1_GhostPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047629A0, List_1_GhostPlayer__ToArray__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_GhostPlayer_
