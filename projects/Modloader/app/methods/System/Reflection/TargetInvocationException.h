#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::TargetInvocationException {
    IL2CPP_REGISTER_METHOD(0x02698CC0, void, ctor_1, (app::TargetInvocationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02698D50, void, ctor_2, (app::TargetInvocationException * this_ptr, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x02698DF0, void, ctor_3, (app::TargetInvocationException * this_ptr, app::String* message, app::Exception* inner))
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, ctor_4, (app::TargetInvocationException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::TargetInvocationException
