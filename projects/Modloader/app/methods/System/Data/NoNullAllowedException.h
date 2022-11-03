#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::NoNullAllowedException {
    IL2CPP_REGISTER_METHOD(0x01E47C50, void, ctor_1, (app::NoNullAllowedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04715328, NoNullAllowedException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E47CA0, void, ctor_2, (app::NoNullAllowedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E47D30, void, ctor_3, (app::NoNullAllowedException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::NoNullAllowedException
