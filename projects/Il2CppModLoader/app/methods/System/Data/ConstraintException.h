#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::ConstraintException {
    IL2CPP_REGISTER_METHOD(0x02392380, void, ctor_1, (app::ConstraintException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047808B8, ConstraintException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023923D0, void, ctor_2, (app::ConstraintException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02392460, void, ctor_3, (app::ConstraintException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::ConstraintException
