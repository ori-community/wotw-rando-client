#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::SyntaxErrorException {
    IL2CPP_REGISTER_METHOD(0x022BE900, void, ctor_1, (app::SyntaxErrorException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0477AD80, SyntaxErrorException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E3FF00, void, ctor_2, (app::SyntaxErrorException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FF90, void, ctor_3, (app::SyntaxErrorException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::SyntaxErrorException
