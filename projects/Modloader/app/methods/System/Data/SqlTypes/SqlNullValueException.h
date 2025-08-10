#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SqlNullValueException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::SqlTypes::SqlNullValueException {
    IL2CPP_REGISTER_METHOD(0x022B8400, void, ctor_1, app::SqlNullValueException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022B8490, void, ctor_2, app::SqlNullValueException* this_ptr, app::String* message, app::Exception* e)
} // namespace app::classes::System::Data::SqlTypes::SqlNullValueException
