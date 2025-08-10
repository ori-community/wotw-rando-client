#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SqlTruncateException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::SqlTypes::SqlTruncateException {
    IL2CPP_REGISTER_METHOD(0x022BBFB0, void, ctor_1, app::SqlTruncateException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022BC040, void, ctor_2, app::SqlTruncateException* this_ptr, app::String* message, app::Exception* e)
} // namespace app::classes::System::Data::SqlTypes::SqlTruncateException
