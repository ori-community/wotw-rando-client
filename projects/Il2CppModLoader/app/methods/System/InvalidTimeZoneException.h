#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::InvalidTimeZoneException {
    IL2CPP_REGISTER_METHOD(0x02265F70, void, ctor_1, (app::InvalidTimeZoneException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x02266020, void, ctor_2, (app::InvalidTimeZoneException * this_ptr, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x022660E0, void, ctor_3, (app::InvalidTimeZoneException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x022661A0, void, ctor_4, (app::InvalidTimeZoneException * this_ptr))
}
