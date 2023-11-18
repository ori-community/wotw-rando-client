#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProtocolViolationException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::ProtocolViolationException {
    IL2CPP_REGISTER_METHOD(0x01BCD840, void, ctor_1, (app::ProtocolViolationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD850, void, ctor_2, (app::ProtocolViolationException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::ProtocolViolationException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, ISerializable_GetObjectData, (app::ProtocolViolationException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01BCD870, void, GetObjectData, (app::ProtocolViolationException * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
} // namespace app::classes::System::Net::ProtocolViolationException
