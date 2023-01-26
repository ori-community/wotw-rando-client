#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#include <Modloader/app/structs/FieldMetadata.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingMetadataCollector {
    IL2CPP_REGISTER_METHOD(0x01A0C500, void, ctor_1, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0C770, void, ctor_2, (app::TraceLoggingMetadataCollector * this_ptr, app::TraceLoggingMetadataCollector* other, app::FieldMetadata* group))
    IL2CPP_REGISTER_METHOD(0x00529E80, app::EventFieldTags__Enum, get_Tags, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Tags, (app::TraceLoggingMetadataCollector * this_ptr, app::EventFieldTags__Enum value))
    IL2CPP_REGISTER_METHOD(0x01A0C7A0, int32_t, get_ScratchSize, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0C7C0, int32_t, get_DataCount, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0C7E0, int32_t, get_PinCount, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_BeginningBufferedArray, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0C800, app::TraceLoggingMetadataCollector*, AddGroup, (app::TraceLoggingMetadataCollector * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01A0CA90, void, AddScalar, (app::TraceLoggingMetadataCollector * this_ptr, app::String* name, app::TraceLoggingDataType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01A0CD20, void, AddBinary, (app::TraceLoggingMetadataCollector * this_ptr, app::String* name, app::TraceLoggingDataType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01A0CF50, void, AddArray, (app::TraceLoggingMetadataCollector * this_ptr, app::String* name, app::TraceLoggingDataType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01A0D200, void, BeginBufferedArray, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0D2F0, void, EndBufferedArray, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0D3D0, app::Byte__Array*, GetMetadata, (app::TraceLoggingMetadataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0D4A0, void, AddField, (app::TraceLoggingMetadataCollector * this_ptr, app::FieldMetadata* field_metadata))
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingMetadataCollector
