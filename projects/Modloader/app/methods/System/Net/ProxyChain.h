#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpAbortDelegate.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Uri_.h>
#include <Modloader/app/structs/ProxyChain.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebException.h>

namespace app::classes::System::Net::ProxyChain {
    IL2CPP_REGISTER_METHOD(0x01BCD890, void, ctor, app::ProxyChain* this_ptr, app::Uri* destination)
    IL2CPP_REGISTER_METHOD(0x01BCD9F0, app::IEnumerator_1_System_Uri_*, GetEnumerator, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCDB50, app::IEnumerator*, IEnumerable_GetEnumerator, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCDB60, app::IEnumerator_1_System_Uri_*, get_Enumerator, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Uri*, get_Destination, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Abort, app::ProxyChain* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCDB80, bool, HttpAbort, app::ProxyChain* this_ptr, app::HttpWebRequest* request, app::WebException* web_exception)
    IL2CPP_REGISTER_METHOD(0x01BCDBA0, app::HttpAbortDelegate*, get_HttpAbortDelegate, app::ProxyChain* this_ptr)
} // namespace app::classes::System::Net::ProxyChain
