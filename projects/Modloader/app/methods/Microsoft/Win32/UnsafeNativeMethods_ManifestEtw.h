#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/EventProvider_EventData.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw {
    IL2CPP_REGISTER_METHOD(0x023B70F0, uint32_t, EventRegister, (app::Guid * provider_id, app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* enable_callback, app::Void* callback_context, int64_t* registration_handle))
    IL2CPP_REGISTER_METHOD(0x023B71C0, uint32_t, EventUnregister, (int64_t registration_handle))
    IL2CPP_REGISTER_METHOD(0x023B7260, int32_t, EventWriteTransferWrapper, (int64_t registration_handle, app::EventDescriptor* event_descriptor, app::Guid* activity_id, app::Guid* related_activity_id, int32_t user_data_count, app::EventProvider_EventData* user_data))
    IL2CPP_REGISTER_METHOD(0x023B73B0, int32_t, EventWriteTransfer, (int64_t registration_handle, app::EventDescriptor* event_descriptor, app::Guid* activity_id, app::Guid* related_activity_id, int32_t user_data_count, app::EventProvider_EventData* user_data))
    IL2CPP_REGISTER_METHOD(0x023B7480, int32_t, EventActivityIdControl, (app::UnsafeNativeMethods_ManifestEtw_ActivityControl__Enum control_code, app::Guid* activity_id))
    IL2CPP_REGISTER_METHOD(0x023B7530, int32_t, EventSetInformation, (int64_t registration_handle, app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum information_class, app::Void* event_information, int32_t information_length))
    IL2CPP_REGISTER_METHOD(0x023B75F0, int32_t, EnumerateTraceGuidsEx, (app::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS__Enum trace_query_info_class, app::Void* in_buffer, int32_t in_buffer_size, app::Void* out_buffer, int32_t out_buffer_size, int32_t* return_length))
} // namespace app::classes::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw
