#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/IntPtr__Array.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/UIntPtr__Array.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingDataCollector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TraceLoggingDataCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A09790, int32_t, BeginBufferedArray, app::TraceLoggingDataCollector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A09860, void, EndBufferedArray, app::TraceLoggingDataCollector* this_ptr, int32_t bookmark, int32_t count)
    IL2CPP_REGISTER_METHOD(0x01A09930, void, AddScalar_1, app::TraceLoggingDataCollector* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01A09A00, void, AddScalar_2, app::TraceLoggingDataCollector* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01A09AD0, void, AddScalar_3, app::TraceLoggingDataCollector* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01A09BA0, void, AddScalar_4, app::TraceLoggingDataCollector* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01A09C70, void, AddScalar_5, app::TraceLoggingDataCollector* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01A09D40, void, AddScalar_6, app::TraceLoggingDataCollector* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01A09E10, void, AddScalar_7, app::TraceLoggingDataCollector* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01A09EE0, void, AddScalar_8, app::TraceLoggingDataCollector* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01A09FA0, void, AddScalar_9, app::TraceLoggingDataCollector* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01A0A060, void, AddScalar_10, app::TraceLoggingDataCollector* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x01A0A120, void, AddScalar_11, app::TraceLoggingDataCollector* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x01A0A200, void, AddScalar_12, app::TraceLoggingDataCollector* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01A0A2D0, void, AddScalar_13, app::TraceLoggingDataCollector* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x01A0A3A0, void, AddScalar_14, app::TraceLoggingDataCollector* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01A0A470, void, AddScalar_15, app::TraceLoggingDataCollector* this_ptr, app::Guid value)
    IL2CPP_REGISTER_METHOD(0x01A0A540, void, AddBinary_1, app::TraceLoggingDataCollector* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01A0A650, void, AddBinary_2, app::TraceLoggingDataCollector* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0A760, void, AddArray_1, app::TraceLoggingDataCollector* this_ptr, app::Boolean__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0A870, void, AddArray_2, app::TraceLoggingDataCollector* this_ptr, app::SByte__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0A980, void, AddArray_3, app::TraceLoggingDataCollector* this_ptr, app::Int16__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0AA90, void, AddArray_4, app::TraceLoggingDataCollector* this_ptr, app::UInt16__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0ABA0, void, AddArray_5, app::TraceLoggingDataCollector* this_ptr, app::Int32__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0ACB0, void, AddArray_6, app::TraceLoggingDataCollector* this_ptr, app::UInt32__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0ADC0, void, AddArray_7, app::TraceLoggingDataCollector* this_ptr, app::Int64__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0AED0, void, AddArray_8, app::TraceLoggingDataCollector* this_ptr, app::UInt64__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0AFE0, void, AddArray_9, app::TraceLoggingDataCollector* this_ptr, app::IntPtr__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B0F0, void, AddArray_10, app::TraceLoggingDataCollector* this_ptr, app::UIntPtr__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B230, void, AddArray_11, app::TraceLoggingDataCollector* this_ptr, app::Single__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B340, void, AddArray_12, app::TraceLoggingDataCollector* this_ptr, app::Double__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B450, void, AddArray_13, app::TraceLoggingDataCollector* this_ptr, app::Char__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B560, void, AddArray_14, app::TraceLoggingDataCollector* this_ptr, app::Guid__Array* value)
    IL2CPP_REGISTER_METHOD(0x01A0B670, void, cctor, )
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingDataCollector
