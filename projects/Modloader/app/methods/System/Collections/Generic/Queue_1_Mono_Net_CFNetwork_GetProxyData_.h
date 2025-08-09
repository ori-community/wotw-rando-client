#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFNetwork_GetProxyData.h>
#include <Modloader/app/structs/Queue_1_Mono_Net_CFNetwork_GetProxyData_.h>

namespace app::classes::System::Collections::Generic::Queue_1_Mono_Net_CFNetwork_GetProxyData_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_Mono_Net_CFNetwork_GetProxyData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::CFNetwork_GetProxyData*, Dequeue, app::Queue_1_Mono_Net_CFNetwork_GetProxyData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Queue_1_Mono_Net_CFNetwork_GetProxyData_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_Mono_Net_CFNetwork_GetProxyData_* this_ptr, app::CFNetwork_GetProxyData* item)
} // namespace app::classes::System::Collections::Generic::Queue_1_Mono_Net_CFNetwork_GetProxyData_
