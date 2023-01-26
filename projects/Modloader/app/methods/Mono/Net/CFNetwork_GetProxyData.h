#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFNetwork_GetProxyData.h>

namespace app::classes::Mono::Net::CFNetwork_GetProxyData {
    IL2CPP_REGISTER_METHOD(0x01D61360, void, Dispose, (app::CFNetwork_GetProxyData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02177C20, void, ctor, (app::CFNetwork_GetProxyData * this_ptr))
} // namespace app::classes::Mono::Net::CFNetwork_GetProxyData
