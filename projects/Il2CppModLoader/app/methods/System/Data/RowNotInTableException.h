#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::RowNotInTableException {
    IL2CPP_REGISTER_METHOD(0x01E4C130, void, ctor_1, (app::RowNotInTableException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474EC60, RowNotInTableException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E4C180, void, ctor_2, (app::RowNotInTableException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E4C210, void, ctor_3, (app::RowNotInTableException * this_ptr, app::String * s))
}
