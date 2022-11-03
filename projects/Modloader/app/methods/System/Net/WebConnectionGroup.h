#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::WebConnectionGroup {
    IL2CPP_REGISTER_METHOD(0x01D68CC0, void, ctor, (app::WebConnectionGroup * this_ptr, app::ServicePoint* s_point, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01D68EF0, void, add_ConnectionClosed, (app::WebConnectionGroup * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01D68FE0, void, remove_ConnectionClosed, (app::WebConnectionGroup * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x01D690D0, void, OnConnectionClosed, (app::WebConnectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D690F0, void, Close, (app::WebConnectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D694E0, app::WebConnection*, GetConnection, (app::WebConnectionGroup * this_ptr, app::HttpWebRequest* request, bool* created))
    IL2CPP_REGISTER_METHOD(0x01D695F0, void, PrepareSharingNtlm, (app::WebConnection * cnc, app::HttpWebRequest* request))
    IL2CPP_REGISTER_METHOD(0x01D69860, app::WebConnectionGroup_ConnectionState*, FindIdleConnection, (app::WebConnectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D69A90, app::WebConnection*, CreateOrReuseConnection, (app::WebConnectionGroup * this_ptr, app::HttpWebRequest* request, bool* created))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::WebConnectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Queue*, get_Queue, (app::WebConnectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D69D60, bool, TryRecycle, (app::WebConnectionGroup * this_ptr, app::TimeSpan max_idle_time, app::DateTime* idle_since))
} // namespace app::classes::System::Net::WebConnectionGroup
