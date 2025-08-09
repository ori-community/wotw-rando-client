#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::SerializationException {
    IL2CPP_REGISTER_METHOD(0x01EDE190, void, ctor_1, app::SerializationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EDE250, void, ctor_2, app::SerializationException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01EDE270, void, ctor_3, app::SerializationException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, app::SerializationException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01EDE290, void, cctor, )
} // namespace app::classes::System::Runtime::Serialization::SerializationException
