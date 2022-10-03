#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::RemotingException {
    IL2CPP_REGISTER_METHOD(0x01E25790, void, ctor_1, (app::RemotingException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E259B0, void, ctor_2, (app::RemotingException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::RemotingException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_4, (app::RemotingException * this_ptr, app::String* message, app::Exception* inner_exception))
} // namespace app::classes::System::Runtime::Remoting::RemotingException
