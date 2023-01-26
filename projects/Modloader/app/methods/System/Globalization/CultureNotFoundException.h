#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureNotFoundException.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::CultureNotFoundException {
    IL2CPP_REGISTER_METHOD(0x025FC0F0, void, ctor_1, (app::CultureNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025FC180, void, ctor_2, (app::CultureNotFoundException * this_ptr, app::String* param_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x025FC1C0, void, ctor_3, (app::CultureNotFoundException * this_ptr, app::String* param_name, app::String* invalid_culture_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x025FC210, void, ctor_4, (app::CultureNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x025FC390, void, GetObjectData, (app::CultureNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Nullable_1_Int32_, get_InvalidCultureId, (app::CultureNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_InvalidCultureName, (app::CultureNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025FC520, app::String*, get_DefaultMessage, ())
    IL2CPP_REGISTER_METHOD(0x025FC5A0, app::String*, get_FormatedInvalidCultureId, (app::CultureNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025FC7B0, app::String*, get_Message, (app::CultureNotFoundException * this_ptr))
} // namespace app::classes::System::Globalization::CultureNotFoundException
