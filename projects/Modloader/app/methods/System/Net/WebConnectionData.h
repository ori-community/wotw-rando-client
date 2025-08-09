#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/ReadState__Enum.h>
#include <Modloader/app/structs/WebConnectionData.h>

namespace app::classes::System::Net::WebConnectionData {
    IL2CPP_REGISTER_METHOD(0x00C26ED0, void, ctor_1, app::WebConnectionData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, app::WebConnectionData* this_ptr, app::HttpWebRequest* request)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HttpWebRequest*, get_request, app::WebConnectionData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_request, app::WebConnectionData* this_ptr, app::HttpWebRequest* value)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::ReadState__Enum, get_ReadState, app::WebConnectionData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D68B50, void, set_ReadState, app::WebConnectionData* this_ptr, app::ReadState__Enum value)
} // namespace app::classes::System::Net::WebConnectionData
