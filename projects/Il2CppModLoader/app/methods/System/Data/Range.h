#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::Range {
    IL2CPP_REGISTER_METHOD(0x001D5BC0, void, ctor, (app::Range__Boxed * this_ptr, int32_t min, int32_t max))
    IL2CPP_REGISTER_METHODINFO(0x0471C428, Range__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D5BD0, int32_t, get_Count, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5BF0, bool, get_IsNull, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C00, int32_t, get_Min, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C20, void, CheckNull, (app::Range__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798FE0, Range_CheckNull__MethodInfo)
}
