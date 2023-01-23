#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TargetParameterCountException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Reflection::TargetParameterCountException {
    IL2CPP_REGISTER_METHOD(0x02698E10, void, ctor_1, (app::TargetParameterCountException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698EA0, void, ctor_2, (app::TargetParameterCountException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02698EC0, void, ctor_3, (app::TargetParameterCountException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, ctor_4, (app::TargetParameterCountException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::TargetParameterCountException
