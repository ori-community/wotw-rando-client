#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EvaluateException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::EvaluateException {
    IL2CPP_REGISTER_METHOD(0x01F4D260, void, ctor_1, app::EvaluateException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01E3FF00, void, ctor_2, app::EvaluateException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E3FF90, void, ctor_3, app::EvaluateException* this_ptr, app::String* s)
} // namespace app::classes::System::Data::EvaluateException
