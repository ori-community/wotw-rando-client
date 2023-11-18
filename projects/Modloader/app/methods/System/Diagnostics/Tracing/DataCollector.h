#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataCollector__Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/EventSource_EventData.h>
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::System::Diagnostics::Tracing::DataCollector {
    IL2CPP_REGISTER_METHOD(0x0013DDE0, void, Enable, (app::DataCollector__Boxed * this_ptr, uint8_t* scratch, int32_t scratch_size, app::EventSource_EventData* datas, int32_t data_count, app::GCHandle* pins, int32_t pin_count))
    IL2CPP_REGISTER_METHOD(0x0013DE30, void, Disable, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DE40, app::EventSource_EventData*, Finish, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DE60, void, AddScalar, (app::DataCollector__Boxed * this_ptr, app::Void* value, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0013DE70, void, AddBinary_1, (app::DataCollector__Boxed * this_ptr, app::String* value, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0013DE80, void, AddBinary_2, (app::DataCollector__Boxed * this_ptr, app::Array* value, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0013DEA0, void, AddArray, (app::DataCollector__Boxed * this_ptr, app::Array* value, int32_t length, int32_t item_size))
    IL2CPP_REGISTER_METHOD(0x0013DEB0, int32_t, BeginBufferedArray, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DEE0, void, EndBufferedArray, (app::DataCollector__Boxed * this_ptr, int32_t bookmark, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0013DEF0, void, BeginBuffered, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DF10, void, EndBuffered, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DF60, void, EnsureBuffer_1, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DF80, void, EnsureBuffer_2, (app::DataCollector__Boxed * this_ptr, int32_t additional_size))
    IL2CPP_REGISTER_METHOD(0x0013DFA0, void, GrowBuffer, (app::DataCollector__Boxed * this_ptr, int32_t required))
    IL2CPP_REGISTER_METHOD(0x0013DFB0, void, PinArray, (app::DataCollector__Boxed * this_ptr, app::Object* value, int32_t size))
    IL2CPP_REGISTER_METHOD(0x0013DFC0, void, ScalarsBegin, (app::DataCollector__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013DFD0, void, ScalarsEnd, (app::DataCollector__Boxed * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DataCollector
