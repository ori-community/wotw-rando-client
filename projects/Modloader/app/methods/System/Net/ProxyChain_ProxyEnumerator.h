#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::ProxyChain_ProxyEnumerator {
    IL2CPP_REGISTER_METHOD(0x01BCDD10, void, ctor, (app::ProxyChain_ProxyEnumerator * this_ptr, app::ProxyChain* chain))
    IL2CPP_REGISTER_METHOD(0x01BCDD20, app::Uri*, get_Current, (app::ProxyChain_ProxyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764460, ProxyChain_ProxyEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BCDD20, app::Object*, IEnumerator_get_Current, (app::ProxyChain_ProxyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCDE20, bool, MoveNext, (app::ProxyChain_ProxyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472E848, ProxyChain_ProxyEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BCE170, void, Reset, (app::ProxyChain_ProxyEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::ProxyChain_ProxyEnumerator * this_ptr))
} // namespace app::classes::System::Net::ProxyChain_ProxyEnumerator
