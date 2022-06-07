#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::AmbiguousMatchException {
    IL2CPP_REGISTER_METHOD(0x02280F00, void, ctor_1, (app::AmbiguousMatchException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02280F90, void, ctor_2, (app::AmbiguousMatchException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::AmbiguousMatchException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
