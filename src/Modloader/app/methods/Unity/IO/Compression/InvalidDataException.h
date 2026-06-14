#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/InvalidDataException_1.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Unity::IO::Compression::InvalidDataException {
    IL2CPP_REGISTER_METHOD(0x02B7D140, void, ctor_1, app::InvalidDataException_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E259B0, void, ctor_2, app::InvalidDataException_1* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_3, app::InvalidDataException_1* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, app::InvalidDataException_1* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::Unity::IO::Compression::InvalidDataException
