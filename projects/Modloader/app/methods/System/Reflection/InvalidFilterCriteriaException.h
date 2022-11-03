#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::InvalidFilterCriteriaException {
    IL2CPP_REGISTER_METHOD(0x0268AD70, void, ctor_1, (app::InvalidFilterCriteriaException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0268AE00, void, ctor_2, (app::InvalidFilterCriteriaException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, ctor_3, (app::InvalidFilterCriteriaException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::InvalidFilterCriteriaException
