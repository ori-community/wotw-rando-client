#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RowNotInTableException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::RowNotInTableException {
    IL2CPP_REGISTER_METHOD(0x01E4C130, void, ctor_1, (app::RowNotInTableException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474EC60, RowNotInTableException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E4C180, void, ctor_2, (app::RowNotInTableException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4C210, void, ctor_3, (app::RowNotInTableException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::RowNotInTableException
