#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventDescriptor__Boxed.h>
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EventDescriptor {
    IL2CPP_REGISTER_METHOD(0x0013DFE0, void, ctor_1, (app::EventDescriptor__Boxed * this_ptr, int32_t tracelogging_id, uint8_t level, uint8_t opcode, int64_t keywords))
    IL2CPP_REGISTER_METHOD(0x0013E010, void, ctor_2, (app::EventDescriptor__Boxed * this_ptr, int32_t id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int32_t task, int64_t keywords))
    IL2CPP_REGISTER_METHOD(0x00113CC0, int32_t, get_EventId, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011BD50, uint8_t, get_Version, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F130, uint8_t, get_Channel, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011DC50, uint8_t, get_Level, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013E030, uint8_t, get_Opcode, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013E040, int32_t, get_Task, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, int64_t, get_Keywords, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013E050, bool, Equals_1, (app::EventDescriptor__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0013E180, int32_t, GetHashCode, (app::EventDescriptor__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013E1B0, bool, Equals_2, (app::EventDescriptor__Boxed * this_ptr, app::EventDescriptor other))
} // namespace app::classes::System::Diagnostics::Tracing::EventDescriptor
