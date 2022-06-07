#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Network::Web::Request_1_GetReplayCallback_ {
    IL2CPP_REGISTER_METHOD(0x0052A000, void, SetMethod, (app::Request_1_GetReplayCallback_ * this_ptr, app::Method__Enum method_1))
    IL2CPP_REGISTER_METHODINFO(0x0471E018, Request_1_GetReplayCallback__SetMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02722770, void, Send, (app::Request_1_GetReplayCallback_ * this_ptr, app::Action_1_GetReplayCallback_ * callback))
    IL2CPP_REGISTER_METHODINFO(0x0477E1C8, Request_1_GetReplayCallback__Send__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Path, (app::Request_1_GetReplayCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::Method__Enum, get_Method, (app::Request_1_GetReplayCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IDataReader *, get_DataReader, (app::Request_1_GetReplayCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Dictionary_2_System_String_System_String_ *, get_Headers, (app::Request_1_GetReplayCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027229E0, app::IRequestCallback *, CreateRequestCallbackObject, (app::Request_1_GetReplayCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02722AA0, void, Finish, (app::Request_1_GetReplayCallback_ * this_ptr, app::IRequestCallback * result))
}
