#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingMetadataCollector_Impl {
    IL2CPP_REGISTER_METHOD(0x01A0D610, void, AddScalar, (app::TraceLoggingMetadataCollector_Impl * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x04726D60, TraceLoggingMetadataCollector_Impl_AddScalar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A0D740, void, AddNonscalar, (app::TraceLoggingMetadataCollector_Impl * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DE50, TraceLoggingMetadataCollector_Impl_AddNonscalar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A0D850, void, BeginBuffered, (app::TraceLoggingMetadataCollector_Impl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0D880, void, EndBuffered, (app::TraceLoggingMetadataCollector_Impl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0D890, int32_t, Encode, (app::TraceLoggingMetadataCollector_Impl * this_ptr, app::Byte__Array * metadata))
    IL2CPP_REGISTER_METHOD(0x01A0D9F0, void, ctor, (app::TraceLoggingMetadataCollector_Impl * this_ptr))
}
