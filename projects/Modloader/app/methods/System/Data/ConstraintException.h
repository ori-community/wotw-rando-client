#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::ConstraintException {
    IL2CPP_REGISTER_METHOD(0x02392380, void, ctor_1, (app::ConstraintException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x023923D0, void, ctor_2, (app::ConstraintException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02392460, void, ctor_3, (app::ConstraintException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::ConstraintException
