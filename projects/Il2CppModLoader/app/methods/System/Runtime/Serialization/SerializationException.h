#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationException {
    IL2CPP_REGISTER_METHOD(0x01EDE190, void, ctor_1, (app::SerializationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EDE250, void, ctor_2, (app::SerializationException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01EDE270, void, ctor_3, (app::SerializationException * this_ptr, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::SerializationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01EDE290, void, cctor, ())
}
