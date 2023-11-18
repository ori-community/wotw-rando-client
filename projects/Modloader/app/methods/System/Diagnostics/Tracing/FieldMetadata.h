#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldMetadata.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>

namespace app::classes::System::Diagnostics::Tracing::FieldMetadata {
    IL2CPP_REGISTER_METHOD(0x019FD900, void, ctor_1, (app::FieldMetadata * this_ptr, app::String* name, app::TraceLoggingDataType__Enum type, app::EventFieldTags__Enum tags, bool variable_count))
    IL2CPP_REGISTER_METHOD(0x019FD940, void, ctor_2, (app::FieldMetadata * this_ptr, app::String* name, app::TraceLoggingDataType__Enum data_type, app::EventFieldTags__Enum tags, uint8_t count_flags, uint16_t fixed_count, app::Byte__Array* custom))
    IL2CPP_REGISTER_METHOD(0x019FDBB0, void, IncrementStructFieldCount, (app::FieldMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FDC80, void, Encode, (app::FieldMetadata * this_ptr, int32_t* pos, app::Byte__Array* metadata))
} // namespace app::classes::System::Diagnostics::Tracing::FieldMetadata
