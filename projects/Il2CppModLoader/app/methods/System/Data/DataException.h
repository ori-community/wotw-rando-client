#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::DataException {
    IL2CPP_REGISTER_METHOD(0x0239F9E0, void, ctor_1, (app::DataException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04738608, DataException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E3FF00, void, ctor_2, (app::DataException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FF90, void, ctor_3, (app::DataException * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01E259C0, void, ctor_4, (app::DataException * this_ptr, app::String* s, app::Exception* inner_exception))
} // namespace app::classes::System::Data::DataException
