#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvalidConstraintException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::InvalidConstraintException {
    IL2CPP_REGISTER_METHOD(0x01E3FDB0, void, ctor_1, (app::InvalidConstraintException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E3FE00, void, ctor_2, (app::InvalidConstraintException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FE90, void, ctor_3, (app::InvalidConstraintException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::InvalidConstraintException
