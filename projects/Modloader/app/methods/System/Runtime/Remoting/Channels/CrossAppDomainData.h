#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Channels::CrossAppDomainData {
    IL2CPP_REGISTER_METHOD(0x01A9EB20, void, ctor, (app::CrossAppDomainData * this_ptr, int32_t domain_id))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_DomainID, (app::CrossAppDomainData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_ProcessID, (app::CrossAppDomainData * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Channels::CrossAppDomainData
