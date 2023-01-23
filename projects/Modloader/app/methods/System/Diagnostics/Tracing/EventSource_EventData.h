#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventSource_EventData__Boxed.h>

namespace app::classes::System::Diagnostics::Tracing::EventSource_EventData {
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_DataPointer, (app::EventSource_EventData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00154BF0, void, set_DataPointer, (app::EventSource_EventData__Boxed * this_ptr, void* value))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_Size, (app::EventSource_EventData__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00154C00, void, SetMetadata, (app::EventSource_EventData__Boxed * this_ptr, uint8_t* pointer, int32_t size, int32_t reserved))
} // namespace app::classes::System::Diagnostics::Tracing::EventSource_EventData
