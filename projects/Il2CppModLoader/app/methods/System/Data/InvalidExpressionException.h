#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::InvalidExpressionException {
    IL2CPP_REGISTER_METHOD(0x01E3FEB0, void, ctor_1, (app::InvalidExpressionException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04724D38, InvalidExpressionException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E3FF00, void, ctor_2, (app::InvalidExpressionException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FF90, void, ctor_3, (app::InvalidExpressionException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::InvalidExpressionException
