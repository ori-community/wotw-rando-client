#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/ListenerPrefix.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::ListenerPrefix {
    IL2CPP_REGISTER_METHOD(0x01E6D7F0, void, ctor, app::ListenerPrefix* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, ToString, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IPAddress__Array*, get_Addresses, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Addresses, app::ListenerPrefix* this_ptr, app::IPAddress__Array* value)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Secure, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Host, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6D800, int32_t, get_Port, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Path, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6D810, bool, Equals, app::ListenerPrefix* this_ptr, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, app::ListenerPrefix* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6D900, void, Parse, app::ListenerPrefix* this_ptr, app::String* uri)
    IL2CPP_REGISTER_METHOD(0x01E6DD30, void, CheckUri, app::String* uri)
} // namespace app::classes::System::Net::ListenerPrefix
