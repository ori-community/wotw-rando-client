#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/SqlTypeException.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::SqlTypes::SqlTypeException {
    IL2CPP_REGISTER_METHOD(0x022BC060, void, ctor_1, app::SqlTypeException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022BC0F0, void, ctor_2, app::SqlTypeException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x022BC120, void, ctor_3, app::SqlTypeException* this_ptr, app::String* message, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x022BC140, void, ctor_4, app::SqlTypeException* this_ptr, app::SerializationInfo* si, app::StreamingContext sc)
    IL2CPP_REGISTER_METHOD(0x022BC1D0, app::SerializationInfo*, SqlTypeExceptionSerialization, app::SerializationInfo* si, app::StreamingContext sc)
} // namespace app::classes::System::Data::SqlTypes::SqlTypeException
